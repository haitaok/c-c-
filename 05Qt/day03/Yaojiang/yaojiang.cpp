#include "yaojiang.h"
#include "ui_yaojiang.h"
#include <QTime>
YaoJiang::YaoJiang(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::YaoJiang)
{
    /*随机种子*/
    qsrand(QTime::currentTime().msec());
    ui->setupUi(this);
    paintFlag=false;
    timer= new QTimer();
    timer->setInterval(200);
    timer->start();
    names[0]="lili";
    names[1]="shasha";
    names[2]="weiwei";
    names[3]="shanshan";
    //repaint()是一个槽函数
    connect(timer,SIGNAL(timeout()),this,SLOT(repaint()));
    connect(ui->pstart,SIGNAL(clicked()),this,SLOT(changePaintFlag()));
    connect(ui->pstop,SIGNAL(clicked()),this,SLOT(changePaintFlag()));

}

YaoJiang::~YaoJiang()
{
    delete ui;
    delete timer;
}
#include<QPainter>
void YaoJiang::paintEvent(QPaintEvent *e){
    QPainter qp(this);
    if(paintFlag){
        //qp.drawLine(0,0,400,600);
        /*得到随机数*/
        rind=(qrand()%4)+1;
        ui->zhongjianren->setText(names[rind-1]);
        QString imgpath=":/img/";
        imgpath+=QString::number(rind);
        imgpath+=".jpg";
        /*加载图片*/
        img.load(imgpath);
        /*图片索放*/
        img = img.scaled(320,480);
        qp.drawImage(40,40,img);
    }
    /*把内存中保持的图片 画上去*/
    qp.drawImage(40,40,img);

}
void YaoJiang::changePaintFlag(){
    if(sender()->objectName()==ui->pstart->objectName()){
        paintFlag=true;
    }
    if(sender()->objectName()==ui->pstop->objectName()){
        paintFlag=false;
    }
}
