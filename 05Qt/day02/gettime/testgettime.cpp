#include "gettime.h"
#include <QApplication>

int main(int argc,char** argv){
	QApplication app(argc,argv);
	GetTime gettime;
	gettime.show();
	return app.exec();
}
