#include "dialog.h"
#include "ui_dialog.h"
#include "string.h"
#include<QDebug>
#include <QColorDialog>
#include<QColor>


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_clicked()
{
    QString str;
    str = ui->lineEdit_0->text();
    QByteArray ba = str.toLocal8Bit();
    char *c_str2 = ba.data();
//    int r,g,b;
    sscanf(c_str2, "%02x%02x%02x", &red, &green, &blue);

    QString strWH = str.insert(0, '#');

    QColor color;
    color.setNamedColor(strWH);
     QString qss = QString("background-color: %1").arg(color.name());

    ui->pushButton_3->setStyleSheet(qss);

    int redVal;
    redVal = red*100/255;
    int blueVal;
    blueVal = blue*100/255;
    int greenVal;
    greenVal = green*100/255;

    ui->spinBox->setValue(blueVal);
    ui->spinBox_2->setValue(redVal);
    ui->spinBox_3->setValue(greenVal);

    qInfo() << red << green << blue ;
    qInfo() << redVal << greenVal << blueVal ;
}

void Dialog::on_pushButton_2_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose color");
    if (color.isValid()){
        red = color.red();
        blue = color.blue();
        green = color.green();
        int redVal;
        redVal = red*100/255;
        int blueVal;
        blueVal = blue*100/255;
        int greenVal;
        greenVal = green*100/255;


         QString qss = QString("background-color: %1").arg(color.name());

        ui->pushButton_3->setStyleSheet(qss);


        QString colName = color.name();
        colName.remove(0,1);
        ui->lineEdit_0->setText(colName);

        ui->spinBox->setValue(blueVal);
        ui->spinBox_2->setValue(redVal);
        ui->spinBox_3->setValue(greenVal);
    }
}
