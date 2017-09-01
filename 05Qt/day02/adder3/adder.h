#ifndef ADDER_H
#define ADDER_H
#include "jfq.h"
#include <QtWidgets/QDialog>
	class Adder:public QDialog{
		Q_OBJECT
		/*定一个界面指针*/
		Ui_Dialog *ui;
		public:
		Adder();
		~Adder();
		/*自定义的槽函数 完成计算*/
		public slots:
		void getComRes();
	};
#endif
