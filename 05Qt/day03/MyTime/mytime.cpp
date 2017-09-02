#include "mytime.h"
#include "ui_mytime.h"
#include <QTime>
MyTime::MyTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyTime)
{
    ui->setupUi(this);
    mytimer=new QTimer();
    /*设置周期*/
    mytimer->setInterval(100);
    mytimer->start();
    /*定时器对象的timeout()*/
    connect(mytimer,SIGNAL(timeout()),this,SLOT(setTime()));
}
void MyTime::setTime(){
    /*获取当前时间 赋值给标签*/
    QString timestr =QTime::currentTime().toString("hh:mm:ss");
    ui->showTime->setText(timestr);
}

MyTime::~MyTime()
{
    delete ui;
}

