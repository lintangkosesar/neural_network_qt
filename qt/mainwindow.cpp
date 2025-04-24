#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QLocale>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    // Set default values
    ui->epochSpinBox->setValue(1000);
    ui->plotLabel->setScaledContents(true);
    
    // Configure double spin boxes
    QList<QDoubleSpinBox*> spinBoxes = {
        ui->pm10SpinBox,
        ui->so2SpinBox,
        ui->coSpinBox,
        ui->o3SpinBox,
        ui->no2SpinBox
    };
    
    // Force US locale to use dot as decimal separator
    QLocale locale(QLocale::English, QLocale::UnitedStates);
    
    foreach (QDoubleSpinBox* spinBox, spinBoxes) {
        spinBox->setLocale(locale);
        spinBox->setMinimum(0.0);
        spinBox->setMaximum(9999.99);
        spinBox->setSingleStep(0.1);
        spinBox->setValue(0.0);  // Set explicit initial value
        spinBox->setDecimals(2);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_trainButton_clicked()
{
    QString csvPath = QFileDialog::getOpenFileName(this, 
        tr("Select Air Quality CSV File"), "", tr("CSV Files (*.csv)"));
    
    if (csvPath.isEmpty()) {
        return;
    }
    
    int epochs = ui->epochSpinBox->value();
    QString plotPath = "training_plot.png";
    QString modelPath = "trained_model.bin";
    
    bool success = train_model(
        csvPath.toStdString().c_str(),
        epochs,
        plotPath.toStdString().c_str(),
        modelPath.toStdString().c_str()
    );
    
    if (success) {
        QMessageBox::information(this, "Success", "Model trained successfully!");
        displayTrainingPlot();
    } else {
        QMessageBox::critical(this, "Error", "Failed to train model");
    }
}

void MainWindow::on_predictButton_clicked()
{
    if (!QFile::exists("trained_model.bin")) {
        QMessageBox::warning(this, "Warning", "Please train the model first");
        return;
    }
    
    // Get input values
    double pm10 = ui->pm10SpinBox->value();
    double so2 = ui->so2SpinBox->value();
    double co = ui->coSpinBox->value();
    double o3 = ui->o3SpinBox->value();
    double no2 = ui->no2SpinBox->value();
    
    // Debug output
    qDebug() << "Prediction Input:";
    qDebug() << "PM10:" << pm10;
    qDebug() << "SO2:" << so2;
    qDebug() << "CO:" << co;
    qDebug() << "O3:" << o3;
    qDebug() << "NO2:" << no2;
    
    // Make prediction
    PredictionResult* result = predict_air_quality(
        pm10, so2, co, o3, no2, "trained_model.bin"
    );
    
    if (result == nullptr) {
        QMessageBox::critical(this, "Error", "Prediction failed");
        return;
    }
    
    // Debug output prediction results
    qDebug() << "Raw Prediction Results:";
    qDebug() << "Class:" << result->class_;
    qDebug() << "BAIK:" << result->probabilities[0];
    qDebug() << "SEDANG:" << result->probabilities[1];
    qDebug() << "TIDAK SEHAT:" << result->probabilities[2];
    
    // Determine category
    QString category;
    int predicted_class = result->class_;
    
    if (predicted_class >= 0 && predicted_class <= 2) {
        switch (predicted_class) {
            case 0: category = "BAIK"; break;
            case 1: category = "SEDANG"; break;
            case 2: category = "TIDAK SEHAT"; break;
            default: category = "UNKNOWN"; break;
        }
    } else {
        // Fallback: determine class from highest probability
        int max_index = 0;
        float max_prob = result->probabilities[0];
        for (int i = 1; i < 3; i++) {
            if (result->probabilities[i] > max_prob) {
                max_prob = result->probabilities[i];
                max_index = i;
            }
        }
        predicted_class = max_index;
        
        switch (predicted_class) {
            case 0: category = "BAIK"; break;
            case 1: category = "SEDANG"; break;
            case 2: category = "TIDAK SEHAT"; break;
            default: category = "UNKNOWN"; break;
        }
        
        qDebug() << "Using fallback classification. Determined class:" << predicted_class;
    }

    
    // Update UI
    ui->resultLabel->setText(QString("Predicted Category: <b>%1</b>").arg(category));
    ui->baikProbLabel->setText(QString("BAIK: %1%").arg(result->probabilities[0] * 100, 0, 'f', 2));
    ui->sedangProbLabel->setText(QString("SEDANG: %1%").arg(result->probabilities[1] * 100, 0, 'f', 2));
    ui->tidakSehatProbLabel->setText(QString("TIDAK SEHAT: %1%").arg(result->probabilities[2] * 100, 0, 'f', 2));
    
    // Clean up
    free_prediction_result(result);
}

void MainWindow::displayTrainingPlot()
{
    QPixmap pixmap("training_plot.png");
    if (!pixmap.isNull()) {
        ui->plotLabel->setPixmap(pixmap);
        ui->plotLabel->setText("");
    } else {
        ui->plotLabel->setText("No training plot available");
    }
}