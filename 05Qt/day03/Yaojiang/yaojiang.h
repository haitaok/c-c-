#ifndef YAOJIANG_H
#define YAOJIANG_H

#include <QDialog>
#include <QImage>
#include <QTimer>
namespace Ui {
class YaoJiang;
}

class YaoJiang : public QDialog
{
    Q_OBJECT

public:
    explicit YaoJiang(QWidget *parent = 0);
    ~YaoJiang();

private:
    Ui::YaoJiang *ui;
    /*增加一个管理图片的对象*/
    QImage img;
    /*随机数字*/
    int rind;
    /*不断发出timeout()信号的定时器*/
    QTimer *timer;
    /*参与摇奖人的数组*/
    QString names[4];
    /*控制绘制的标志*/
    bool paintFlag;
    /*绘制事件处理函数*/
public:
    void paintEvent(QPaintEvent *);
/*点击开始 把绘制标志改成true,
    点击停止 把绘制标志改成false
*/
public slots:
    void changePaintFlag();
};

#endif // YAOJIANG_H
