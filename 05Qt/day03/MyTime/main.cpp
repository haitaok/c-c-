#include "mytime.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTime w;
    w.show();

    return a.exec();
}
