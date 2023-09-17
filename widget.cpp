#include "widget.h"
#include "ui_widget.h"
#include <QApplication>
#include <QProcess>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    QString p=ui->lineEdit->text();

    QProcess *myProcess=new QProcess(this);
    myProcess->start(p);
}
