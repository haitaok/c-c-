#include <QApplication>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>


int main(int argc,char**argv){
	QApplication app(argc,argv);
	QDialog *parent;
	QLineEdit *add;
	QLabel   *oper;
	QLineEdit *added;
	QPushButton *equ;
	QLineEdit  *res;
	/*创建父窗口 和 窗口组件*/
	parent= new QDialog();
	add  =new QLineEdit(parent);
	oper = new QLabel("+",parent);
	added = new QLineEdit(parent);
	equ = new QPushButton("=",parent);
	res = new QLineEdit(parent);
	/*调整大小 和 为位置*/
	parent ->resize(700,300);
	add->move(20,130);
	oper->move(170,130);
	added->move(220,130);
	equ ->move(370,130);
	res ->move(470,130);
	
	parent->show();
	return app.exec();
}
