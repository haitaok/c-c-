#ifndef GETTIME_H
#define GETTIME_H
#include <QDialog>
#include <QLabel>
#include <QPushButton>
class GetTime:public QDialog{
	Q_OBJECT
	QLabel *showTime;
	QPushButton *sendTime;
	public:
	GetTime();
	~GetTime();
	/*提供一个转接槽*/
	public slots:
	void mySlot();
	/*提供一个信号函数*/
	public:signals:
	void mySig(QString par);
};

#endif
