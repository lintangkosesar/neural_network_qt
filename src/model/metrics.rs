use ndarray::{Array2, Axis};

pub fn cross_entropy_loss(y_true: &Array2<f64>, y_pred: &Array2<f64>) -> f64 {
    -(y_true * y_pred.mapv(f64::ln)).sum()
}

pub fn calculate_accuracy(y_true: &Array2<f64>, y_pred: &Array2<f64>) -> f64 {
    let predictions = y_pred.map_axis(Axis(1), |row| {
        row.iter()
            .enumerate()
            .max_by(|(_, a), (_, b)| a.partial_cmp(b).unwrap())
            .map(|(index, _)| index)
            .unwrap()
    });
    let true_labels = y_true.map_axis(Axis(1), |row| {
        row.iter()
            .enumerate()
            .max_by(|(_, a), (_, b)| a.partial_cmp(b).unwrap())
            .map(|(index, _)| index)
            .unwrap()
    });
    predictions.iter()
        .zip(true_labels.iter())
        .filter(|&(a, b)| a == b)
        .count() as f64 / predictions.len() as f64
}