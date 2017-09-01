#include "adder.h"
Adder::Adder(){
	/*创建界面*/
	ui=new Ui_Dialog();
	/*加载界面*/
	ui->setupUi(this);
}
Adder::~Adder(){
	delete ui;
}
void Adder::getComRes(){

}

