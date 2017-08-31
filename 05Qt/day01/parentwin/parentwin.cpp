#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QObject>
int main(int argc,char** argv){
	QApplication app(argc,argv);
	/*创建父窗口对象*/
	QWidget *parent = new QWidget();
	/*改变组件大小*/
	parent->resize(512,380);
	/*创建标签对象 和 按钮对象*/
	QLabel *qlab=new QLabel("hello qt!",parent);
	/*移动标签对象的位置*/
	qlab->move(230,50);
	//qlab->show();
	/*创建按钮对象 并指定父窗口*/
	QPushButton *qpush=new QPushButton("点击",parent);
	/*移动组建的位置*/
	qpush->move(200,300);
	parent->show();
	/*点击按钮关闭标签*/
	//QObject::connect(qpush,SIGNAL(clicked()),qlab,SLOT(close()));
	/*点击按钮关闭父窗口*/
	QObject::connect(qpush,SIGNAL(clicked()),parent,SLOT(close()));
	return app.exec();
}
