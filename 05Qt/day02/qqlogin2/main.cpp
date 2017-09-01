#include <QApplication>
#include "qqlogin.h"

int main(int argv,char** argc){
	QApplication app(argv,argc);
	QqLogin login;
	login.show();
	return app.exec();
}
