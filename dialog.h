#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    int red, green, blue;
    ~Dialog();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
