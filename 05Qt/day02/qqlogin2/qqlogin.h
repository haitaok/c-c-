#ifndef  __QQLOGIN_H
#define __QQLOGIN_H
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
class QqLogin:public QDialog{
	Q_OBJECT
	QLineEdit *uname;
	QLineEdit *upasswd;
	QPushButton *blogin;
	QPushButton *bcancel;
	public:
	QqLogin();
	~QqLogin();
	/*提供登录和退出的槽函数*/
	public slots:
	void loginAndCancel();
};
#endif
