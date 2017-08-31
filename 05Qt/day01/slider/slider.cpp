#include <QApplication>
#include <QSlider>
#include <QWidget>
#include <QSpinBox>

int main(int argc,char**argv){
	QApplication app(argc,argv);
	QWidget *parent = new QWidget();
	parent->resize(512,380);
	QSlider *slider = new QSlider(parent);
	slider->move(20,20);
	slider->resize(30,300);
	QSpinBox *spinbox = new QSpinBox(parent);
	
	spinbox->move(200,100);
	/*槽函数 可以像普通成员函数使用*/
	//spinbox->setValue(59);
	QObject::connect(slider,SIGNAL(valueChanged(int)),spinbox,SLOT(setValue(int)));
	QObject::connect(spinbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
	parent->show();
	return app.exec();
}
