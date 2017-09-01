#include <QApplication>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>

int main(int argc,char**argv){
	QApplication app(argc,argv);
	QDialog  *parent;
	QLineEdit *uname;
	QLineEdit *upasswd;
	QPushButton *blogin;
	QPushButton *bcancel;
	/*赋值*/
	parent = new QDialog();
	uname = new QLineEdit(parent);
	upasswd = new QLineEdit(parent);
	blogin = new QPushButton("login",parent);
	bcancel = new QPushButton("cancel",parent);
	
	/*调整界面大小 和 组件位置*/
	parent->resize(400,300);
	uname->move(200,50);
	upasswd->move(200,100);
	blogin->move(50,200);
	bcancel->move(250,200);
	parent->show();
	/*实现功能*/
	QObject::connect(bcancel,SIGNAL(clicked()),parent,SLOT(close()));
	return app.exec();
}
