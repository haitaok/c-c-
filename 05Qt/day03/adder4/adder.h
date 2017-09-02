#ifndef ADDER_H
#define ADDER_H

#include <QDialog>

namespace Ui {
class Adder;
}

class Adder : public QDialog
{
    Q_OBJECT

public:
    explicit Adder(QWidget *parent = 0);
    ~Adder();
public slots:
    void getCmpRes();

private:
    Ui::Adder *ui;
};

#endif // ADDER_H
