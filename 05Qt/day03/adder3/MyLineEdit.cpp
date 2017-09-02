#include "MyLineEdit.h"
#include <QDialog>
MyLineEdit::MyLineEdit(QDialog* d):QLineEdit(d){
	
}
MyLineEdit::~MyLineEdit(){
	qDebug("haha");
}

