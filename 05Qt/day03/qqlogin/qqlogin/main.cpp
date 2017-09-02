#include "qqlogin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QQLogin w;
    w.show();

    return a.exec();
}
