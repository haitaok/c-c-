#ifndef QQLOGIN_H
#define QQLOGIN_H

#include <QMainWindow>

namespace Ui {
class QQLogin;
}

class QQLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit QQLogin(QWidget *parent = 0);
    ~QQLogin();
public slots:
    void loginAndCancel();

private:
    Ui::QQLogin *ui;
};

#endif // QQLOGIN_H
