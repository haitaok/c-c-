#include "qqlogin.h"

/*QLineEdit *uname;
QLineEdit *upasswd;
QPushButton *blogin;
QPushButton *bcancel;*/

QqLogin::QqLogin(){
	uname=new QLineEdit(this);
	upasswd=new QLineEdit(this);
	blogin = new QPushButton("login",this);
	bcancel = new QPushButton("cancel",this);
	this->resize(400,300);
	uname->move(200,50);
	upasswd->move(200,100);
	blogin->move(50,200);
	bcancel->move(250,200);
	connect(bcancel,SIGNAL(clicked()),this,SLOT(loginAndCancel()));
	connect(blogin,SIGNAL(clicked()),this,SLOT(loginAndCancel()));
}
QqLogin::~QqLogin(){
	delete uname;
	delete upasswd;
	delete blogin;
	delete bcancel;
}
void QqLogin::loginAndCancel(){
	/*需要识别发送信号的对象
		sender() 可以得到发送者的指针
	*/
	if(((QPushButton*)sender())->text()=="cancel"){
		this->close();
	}else if(((QPushButton*)sender())->text()=="login"){
		QString name = uname->text();
		QString paswd = upasswd->text();
		if("abc"==name&&"123"==paswd){
			qDebug("login success!");
		}else{
			qDebug("login failed!");
		}
	}
	
}

