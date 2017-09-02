#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QtWidgets/QLineEdit>

class MyLineEdit:public QLineEdit{
	public:
	MyLineEdit(QDialog* d);
	~MyLineEdit();
};
#endif
