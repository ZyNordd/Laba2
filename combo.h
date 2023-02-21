#ifndef COMBO_H
#define COMBO_H

#include <QMainWindow>

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
    int operation_type = 1;
    Ui::Combo *ui;
    int64_t factorial(int64_t n);

private slots:
    void on_pushButton_A_clicked();//1 type
    void on_pushButton_C_clicked();//2 type
    void on_pushButton_P_clicked();//3 type
    void on_pushButton_calculate_clicked();
};
#endif // COMBO_H
