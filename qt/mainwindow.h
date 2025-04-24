#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_trainButton_clicked();
    void on_predictButton_clicked();

private:
    Ui::MainWindow *ui;
    void displayTrainingPlot();
};

// Rust FFI functions
extern "C" {
    bool train_model(const char* csv_path, int epochs, const char* plot_path, const char* model_path);
    struct PredictionResult {
        int class_;
        double* probabilities;
    };
    PredictionResult* predict_air_quality(double pm10, double so2, double co, double o3, double no2, const char* model_path);
    void free_prediction_result(PredictionResult* result);
}

#endif // MAINWINDOW_H