#ifndef SNAKEGAME_H
#define SNAKEGAME_H
#include <QDialog>
#include <QTimer>
#include <QLabel>
#include <QList>
#include <QKeyEvent>

enum Direction{D_UP,D_DOWN,D_LEFT,D_RIGHT};

class SnakeGame:public QDialog{
    Q_OBJECT
private:
    /*蛇*/
    QList<QLabel*> snake;
    /*食物*/
    QLabel *food;
    /*方向*/
    Direction dire;
    /*步长*/
    int footLen;
    /*定时器*/
    QTimer *timer;
    /*蛇的最大长度*/
    int maxLen;

public:
    SnakeGame();
    ~SnakeGame();
public:
    /*控制方向的事件处理函数*/
    void keyPressEvent(QKeyEvent *e);
    /*得到新食物的函数*/
    QLabel* getNewFood();
/*蛇移动的函数 根据方向 移动一个步长*/
public slots:
    void snakeMove();

};
#endif // SNAKEGAME

