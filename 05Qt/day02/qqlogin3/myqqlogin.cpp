#include "myqqlogin.h"

MyQQLogin::MyQQLogin(){
	/*创建界面*/
	ui=new Ui_Dialog();
	/*加载界面*/
	ui->setupUi(this);
}
MyQQLogin::~MyQQLogin(){
	delete ui;
}

