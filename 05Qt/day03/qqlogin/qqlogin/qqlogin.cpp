#include "qqlogin.h"
#include "ui_qqlogin.h"

QQLogin::QQLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QQLogin)
{
    ui->setupUi(this);
    connect(ui->login,SIGNAL(clicked()),this,SLOT(loginAndCancel()));
    connect(ui->cancel,SIGNAL(clicked()),this,SLOT(loginAndCancel()));
}

QQLogin::~QQLogin()
{
    delete ui;
}
#include <QMessageBox>
void QQLogin::loginAndCancel(){
    if(sender()==ui->cancel){
        QMessageBox msg(this);
        msg.setText("are you quit?");
        msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        if(msg.exec()==QMessageBox::Yes){
            this->close();
        }
    }
    if(sender()==ui->login){
        if(ui->uname->text()=="abc"&&ui->upasswd->text()=="123"){
            qDebug("login success!");
        }else{
            qDebug("login failed!");

        }

    }
}
