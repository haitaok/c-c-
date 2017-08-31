#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QObject>
int main(int argc,char** argv){
	QApplication app(argc,argv);
	QLabel qlab("hello qt");
	qlab.show();
	/*仿照qlab 做一个按钮对象 按钮的类型 QPushButton*/
	QPushButton qpbtn("点击");
	qpbtn.show();
	//QObject::connect(&qpbtn,SIGNAL(clicked()),&qlab,SLOT(close()));
	/*点击按钮 关闭程序 结束程序*/
	QObject::connect(&qpbtn,SIGNAL(clicked()),&app,SLOT(quit()));
	return app.exec();
}
