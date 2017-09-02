#include "adder.h"
Adder::Adder():ui(new Ui_Dialog()){
	/*创建界面*/
	//ui=new Ui_Dialog();
	/*加载界面*/
	ui->setupUi(this);
	/*连接按钮 到 当前对象的槽函数*/
	connect(ui->equ,SIGNAL(clicked()),this,SLOT(getComRes()));
}
Adder::~Adder(){
	delete ui;
}
void Adder::getComRes(){
	//qDebug("this call getComRes");
	ui->res->setText(QString::number(
		ui->add->text().toInt()+ui->added->text().toInt()
	));
}

