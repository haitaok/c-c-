#include "snakegame.h"
#include <QTime>


SnakeGame::SnakeGame(){
    this->resize(800,600);
    /*成员变量赋值*/
    footLen =40;
    snake.push_back(getNewFood());
    food=getNewFood();
    dire = D_RIGHT;
    maxLen =3;
    timer=new QTimer();
    timer->setInterval(200);
    timer->start();
    connect(timer,SIGNAL(timeout()),this,SLOT(snakeMove()));

}
SnakeGame::~SnakeGame(){

}

void  SnakeGame::snakeMove(){
    /*获得蛇头原来的坐标*/
    int x=snake[0]->x();
    int y=snake[0]->y();
    /*当食物 和 蛇头重合 就吃到*/
    if(x==food->x()&&y==food->y()){
        snake.push_back(food);
        food=getNewFood();
    }
    /*根据方向改变坐标*/
    switch(dire){
        case D_UP:
        y=y-footLen;
        break;
        case D_DOWN:
        y=y+footLen;
        break;
        case D_LEFT:
        x=x-footLen;
        break;
        case D_RIGHT:
        x=x+footLen;
        break;
    }
    /*蛇头移动到新坐标*/
   snake[0]->move(x,y);
}





/*控制方向的事件处理函数*/
void  SnakeGame::keyPressEvent(QKeyEvent *e){
    switch(e->key()){
        case Qt::Key_Up:
        dire=D_UP;
        break;
        case Qt::Key_Down:
        dire=D_DOWN;
        break;
        case Qt::Key_Left:
        dire=D_LEFT;
        break;
        case Qt::Key_Right:
        dire=D_RIGHT;
        break;
    }
}
/*得到新食物的函数*/
QLabel*  SnakeGame::getNewFood(){
    food = new QLabel(this);
    food->resize(footLen,footLen);
    food->setAutoFillBackground(true);

    food->setPalette(QPalette(QColor(qrand()%256,qrand()%256,qrand()%256)));
    /*位置随机
        界面范围内
        footLen的整数倍
    */
    int w=this->width()-footLen;
    int h=this->height()-footLen;
    int x = (qrand()%w)/footLen*footLen;
    int y = (qrand()%h)/footLen*footLen;
    food->move(x,y);
    food->show();
    return food;
}
