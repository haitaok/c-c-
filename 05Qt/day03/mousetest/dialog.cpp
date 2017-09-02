#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
#include <QMouseEvent>
void Dialog::mousePressEvent(QMouseEvent* e){
    //qDebug("mouse clicked()");
    switch(e->button()){
        case Qt::LeftButton:
            qDebug("left button clicked %d:%d",e->x(),e->y());
            break;
        case Qt::RightButton:
            qDebug("right button clicked");
            break;
        case Qt::MidButton:
            qDebug("mid button clicked");
        break;

    }
}
void Dialog::keyPressEvent(QKeyEvent* e){
    switch(e->key()){
        case Qt::Key_Up:
        qDebug("key up pressed");
        break;
        case Qt::Key_Down:
        qDebug("key down pressed");
        break;
        case Qt::Key_Left:
        qDebug("key left pressed");
        break;
        case Qt::Key_Right:
        qDebug("key right pressed");
        break;
    }
}
