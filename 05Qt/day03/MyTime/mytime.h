#ifndef MYTIME_H
#define MYTIME_H

#include <QDialog>
#include <QTimer>
namespace Ui {
class MyTime;
}

class MyTime : public QDialog
{
    Q_OBJECT

public:
    explicit MyTime(QWidget *parent = 0);
    ~MyTime();

private:
    /*增加一个定时器 指针*/
    QTimer *mytimer;
    Ui::MyTime *ui;
/*负责给showTime标签赋值的槽函数*/
public slots:
    void setTime();
};

#endif // MYTIME_H
