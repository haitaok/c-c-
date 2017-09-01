#ifndef _ADDER_H
#define _ADDER_H
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QObject>
	class Adder:public QDialog {
		Q_OBJECT
		QLineEdit   *add;
		QLabel      *oper;
		QLineEdit   *added;
		QPushButton *equ;
		QLineEdit   *res;
		public:
		Adder();
		~Adder();
		/*自定义的完成计算的槽函数*/
		public slots:
		void getComRes();
	};
#endif
