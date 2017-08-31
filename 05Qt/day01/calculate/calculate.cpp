#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <iostream>
using namespace std;

int main(int argc,char** argv){
	QApplication app(argc,argv);
	QDialog* parent = new QDialog();
	parent->resize(550,120);
	QLineEdit* edit1 = new QLineEdit(parent);
	edit1->move(10,45);
	int left = edit1->width()+5+40;
	cout <<left<<endl;
	QLabel* qlab = new QLabel("+",parent);
	qlab->move(left,50);
	int left2 = left+((qlab->width())-85);
	cout <<left2<<endl;
 	QLineEdit* edit2 = new QLineEdit(parent);
	edit2->move(left2,45);
	QPushButton* qpush = new QPushButton("=",parent);
	qpush->move(300,47);
	QLineEdit* edit3 = new QLineEdit(parent);
	edit3->move(395,45);
	parent->show();
	return app.exec();
}
