#include "adder.h"
#include <QString>
/*QLineEdit   *add;
QLabel      *oper;
QLineEdit   *added;
QPushButton *equ;
QLineEdit   *res;*/
		
Adder::Adder():add(new QLineEdit(this)){
	/*给成员变量赋值*/
	oper = new QLabel("+",this);
	added = new QLineEdit(this);
	equ = new QPushButton("=",this);
	res = new QLineEdit(this);
	this->resize(620,300);
	/*调整组件位置*/
	add->move(20,130);
	oper->move(170,130);
	added->move(220,130);
	equ ->move(370,130);
	res ->move(470,130);
	/*在这里完成连接功能*/
	connect(equ,SIGNAL(clicked()),this,SLOT(getComRes()));
}
Adder::~Adder(){
	delete add;
	delete oper;
	delete added;
	delete equ;
	delete res;
}
/*自定义的完成计算的槽函数*/
void Adder::getComRes(){
	QString qadd = add->text();
	QString qadded = added->text();
	int iadd = qadd.toInt();
	int iadded =qadd.toInt();
	int ires = iadd+iadded;
	
	res->setText(QString::number(ires));
	//res->setText("9527");
	//qDebug("9528");
}

