#include "adder.h"
#include "ui_adder.h"
#include <QString>

Adder::Adder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adder)
{
    ui->setupUi(this);
    connect(ui->equ,SIGNAL(clicked()),this,SLOT(getCmpRes()));
}

Adder::~Adder()
{
    delete ui;
}
void Adder::getCmpRes(){
    ui->res->setText(QString::number(ui->add->text().toInt()+ui->added->text().toInt()));
}
