#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include <QLabel>
#include <QObject>
int main(int argc,char** argv){
	QApplication app(argc,argv);
	QDialog* parent = new QDialog();
	parent->resize(300,250);
	QLabel* qlab= new QLabel("用户名:",parent);
	qlab->move(30,30);
	QLineEdit *edit = new QLineEdit(parent);
	edit->move(100,30);
	QLabel* qlab2= new QLabel("密码:",parent);
	qlab2->move(30,80);
	QLineEdit *edit2 = new QLineEdit(parent);
	edit2->move(100,80);
	
	QPushButton* qpush1=new QPushButton("登录",parent);
	 qpush1->move(30,200);
	QPushButton* qpush2=new QPushButton("取消",parent);
	 qpush2->move(180,200);
	 QObject::connect(qpush2,SIGNAL(clicked()),parent,SLOT(close()));
	parent->show();
	return app.exec();
}

