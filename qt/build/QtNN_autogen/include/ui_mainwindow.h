/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *headerImageLabel;
    QTabWidget *tabWidget;
    QWidget *tabTraining;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *epochSpinBox;
    QPushButton *trainButton;
    QSpacerItem *horizontalSpacer;
    QLabel *plotLabel;
    QLabel *accuracyLabel;
    QWidget *tabPrediction;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *pm10SpinBox;
    QLabel *label_3;
    QDoubleSpinBox *so2SpinBox;
    QLabel *label_4;
    QDoubleSpinBox *coSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *o3SpinBox;
    QLabel *label_6;
    QDoubleSpinBox *no2SpinBox;
    QPushButton *predictButton;
    QLabel *resultLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *baikProbLabel;
    QLabel *sedangProbLabel;
    QLabel *tidakSehatProbLabel;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headerImageLabel = new QLabel(centralwidget);
        headerImageLabel->setObjectName(QString::fromUtf8("headerImageLabel"));
        headerImageLabel->setMinimumSize(QSize(800, 150));
        headerImageLabel->setMaximumSize(QSize(16777215, 150));
        headerImageLabel->setStyleSheet(QString::fromUtf8("background-color: #3498db;\n"
"                    border-bottom: 2px solid #2980b9;\n"
"                    qproperty-alignment: AlignCenter;"));
        headerImageLabel->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(headerImageLabel);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabTraining = new QWidget();
        tabTraining->setObjectName(QString::fromUtf8("tabTraining"));
        verticalLayout_2 = new QVBoxLayout(tabTraining);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tabTraining);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        epochSpinBox = new QSpinBox(tabTraining);
        epochSpinBox->setObjectName(QString::fromUtf8("epochSpinBox"));
        epochSpinBox->setMinimum(100);
        epochSpinBox->setMaximum(10000);
        epochSpinBox->setValue(1000);
        epochSpinBox->setSingleStep(100);

        horizontalLayout->addWidget(epochSpinBox);

        trainButton = new QPushButton(tabTraining);
        trainButton->setObjectName(QString::fromUtf8("trainButton"));

        horizontalLayout->addWidget(trainButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        plotLabel = new QLabel(tabTraining);
        plotLabel->setObjectName(QString::fromUtf8("plotLabel"));
        plotLabel->setFrameShape(QFrame::Box);
        plotLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(plotLabel);

        accuracyLabel = new QLabel(tabTraining);
        accuracyLabel->setObjectName(QString::fromUtf8("accuracyLabel"));
        accuracyLabel->setAlignment(Qt::AlignCenter);
        accuracyLabel->setStyleSheet(QString::fromUtf8("font-size: 14px; \n"
"                                        font-weight: bold; \n"
"                                        color: #27ae60;\n"
"                                        margin-top: 10px;"));

        verticalLayout_2->addWidget(accuracyLabel);

        tabWidget->addTab(tabTraining, QString());
        tabPrediction = new QWidget();
        tabPrediction->setObjectName(QString::fromUtf8("tabPrediction"));
        verticalLayout_3 = new QVBoxLayout(tabPrediction);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(tabPrediction);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        pm10SpinBox = new QDoubleSpinBox(tabPrediction);
        pm10SpinBox->setObjectName(QString::fromUtf8("pm10SpinBox"));
        pm10SpinBox->setDecimals(2);
        pm10SpinBox->setMaximum(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, pm10SpinBox);

        label_3 = new QLabel(tabPrediction);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        so2SpinBox = new QDoubleSpinBox(tabPrediction);
        so2SpinBox->setObjectName(QString::fromUtf8("so2SpinBox"));
        so2SpinBox->setDecimals(2);
        so2SpinBox->setMaximum(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, so2SpinBox);

        label_4 = new QLabel(tabPrediction);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        coSpinBox = new QDoubleSpinBox(tabPrediction);
        coSpinBox->setObjectName(QString::fromUtf8("coSpinBox"));
        coSpinBox->setDecimals(2);
        coSpinBox->setMaximum(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, coSpinBox);

        label_5 = new QLabel(tabPrediction);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        o3SpinBox = new QDoubleSpinBox(tabPrediction);
        o3SpinBox->setObjectName(QString::fromUtf8("o3SpinBox"));
        o3SpinBox->setDecimals(2);
        o3SpinBox->setMaximum(0);

        formLayout->setWidget(3, QFormLayout::FieldRole, o3SpinBox);

        label_6 = new QLabel(tabPrediction);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        no2SpinBox = new QDoubleSpinBox(tabPrediction);
        no2SpinBox->setObjectName(QString::fromUtf8("no2SpinBox"));
        no2SpinBox->setDecimals(2);
        no2SpinBox->setMaximum(0);

        formLayout->setWidget(4, QFormLayout::FieldRole, no2SpinBox);


        verticalLayout_3->addLayout(formLayout);

        predictButton = new QPushButton(tabPrediction);
        predictButton->setObjectName(QString::fromUtf8("predictButton"));
        predictButton->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        verticalLayout_3->addWidget(predictButton);

        resultLabel = new QLabel(tabPrediction);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setAlignment(Qt::AlignCenter);
        resultLabel->setStyleSheet(QString::fromUtf8("font-size: 18px; font-weight: bold; color: #2c3e50;"));

        verticalLayout_3->addWidget(resultLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(tabPrediction);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        baikProbLabel = new QLabel(tabPrediction);
        baikProbLabel->setObjectName(QString::fromUtf8("baikProbLabel"));
        baikProbLabel->setStyleSheet(QString::fromUtf8("color: #27ae60;"));

        verticalLayout_3->addWidget(baikProbLabel);

        sedangProbLabel = new QLabel(tabPrediction);
        sedangProbLabel->setObjectName(QString::fromUtf8("sedangProbLabel"));
        sedangProbLabel->setStyleSheet(QString::fromUtf8("color: #f39c12;"));

        verticalLayout_3->addWidget(sedangProbLabel);

        tidakSehatProbLabel = new QLabel(tabPrediction);
        tidakSehatProbLabel->setObjectName(QString::fromUtf8("tidakSehatProbLabel"));
        tidakSehatProbLabel->setStyleSheet(QString::fromUtf8("color: #e74c3c;"));

        verticalLayout_3->addWidget(tidakSehatProbLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tabPrediction, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Air Quality Neural Network", nullptr));
        headerImageLabel->setText(QCoreApplication::translate("MainWindow", "<h1 style=\"color: white;\">Air Quality Neural Network</h1>\n"
"                <p style=\"color: white;\">Predicting air quality using Artificial Neural Network</p>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Epochs:", nullptr));
        trainButton->setText(QCoreApplication::translate("MainWindow", "Train Model", nullptr));
        plotLabel->setText(QCoreApplication::translate("MainWindow", "Training plot will appear here", nullptr));
        accuracyLabel->setText(QCoreApplication::translate("MainWindow", "Training Accuracy: -", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTraining), QCoreApplication::translate("MainWindow", "Training", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PM10:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "SO2:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "CO:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "O3:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "NO2:", nullptr));
        predictButton->setText(QCoreApplication::translate("MainWindow", "Predict Air Quality", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "Predicted Category: -", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Probabilities:", nullptr));
        baikProbLabel->setText(QCoreApplication::translate("MainWindow", "BAIK: 0%", nullptr));
        sedangProbLabel->setText(QCoreApplication::translate("MainWindow", "SEDANG: 0%", nullptr));
        tidakSehatProbLabel->setText(QCoreApplication::translate("MainWindow", "TIDAK SEHAT: 0%", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPrediction), QCoreApplication::translate("MainWindow", "Prediction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
