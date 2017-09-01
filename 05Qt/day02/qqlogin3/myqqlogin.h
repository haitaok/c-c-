#ifndef MYQQLOGIN_H
#define MYQQLOGIN_H
#include "qqlogin.h"
#include <QDialog>
class MyQQLogin:public QDialog{
	Ui_Dialog *ui;
	public:
	MyQQLogin();
	~MyQQLogin();
};
#endif
