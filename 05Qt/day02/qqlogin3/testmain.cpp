#include "myqqlogin.h"
#include <QApplication>

int main(int argv,char**argc){
	QApplication app(argv,argc);
	MyQQLogin qqlogin;
	qqlogin.show();
	return app.exec();
}
