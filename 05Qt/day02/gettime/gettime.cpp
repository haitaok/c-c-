#include "gettime.h"

/*QLabel *showTime;
QPushButton *sendTime;*/
GetTime::GetTime(){
	
	this->resize(400,500);
	showTime = new QLabel("this is lab",this);
	sendTime = new QPushButton("currtime",this);
	
	showTime->move(100,200);
	sendTime->move(100,300);
	connect(sendTime,SIGNAL(clicked()),this,SLOT(mySlot()));
	connect(this,SIGNAL(mySig(QString)),showTime,SLOT(setText(QString)));
}
GetTime::~GetTime(){
	delete showTime;
	delete sendTime;
}
/*提供一个转接槽*/
#include <QTime>
void GetTime::mySlot(){
	QString mystr = QTime::currentTime().toString("hh:mm:ss");
	//showTime->setText(mystr);
	/*发射信号*/
	emit mySig(mystr);
}

