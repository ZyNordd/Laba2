#ifndef COMBO_H
#define COMBO_H

#include <QMainWindow>
#include <cmath>

QT_BEGIN_NAMESPACE
namespace Ui { class Combo; }
QT_END_NAMESPACE

class Combo : public QMainWindow
{
    Q_OBJECT

public:
    Combo(QWidget *parent = nullptr);
    ~Combo();

private:
    Ui::Combo *ui;
    int64_t factorial(int64_t n);

private slots:

};
#endif // COMBO_H
