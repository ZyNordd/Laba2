#include "combo.h"
#include "./ui_combo.h"

Combo::Combo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Combo)
{
    ui->setupUi(this);
}

Combo::~Combo()
{
    delete ui;
}

int64_t Combo::factorial(int64_t n) {
    int64_t f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

//This code is useful, but needs to be pasted into the right methods.
    //int64_t k = 0;
    //int64_t n = 0;
    //int64_t answer = 0;
    //switch (operation_type)
    //{
    //case 1:
    //    if (!repetition) {
    //        k = ui->lineEdit_electCount->text().toInt();//k
    //        n = ui->lineEdit_allCount->text().toInt();//n
    //        answer = factorial(n) / factorial(n - k);
    //        ui->lineEdit_answer->setText(QString::number(answer));
    //    }
    //    else {
    //        k = ui->lineEdit_electCount->text().toInt();//k
    //        n = ui->lineEdit_allCount->text().toInt();//n
    //        answer = pow(n,k);
    //        ui->lineEdit_answer->setText(QString::number(answer));
    //    }
    //    break;
    //case 2:
    //    if (!repetition) {
    //        k = ui->lineEdit_electCount->text().toInt();//k
    //        n = ui->lineEdit_allCount->text().toInt();//n
    //        answer = (factorial(n) / factorial(n - k)) / factorial(k);
    //        ui->lineEdit_answer->setText(QString::number(answer));
    //    }
    //    else {
    //        k = ui->lineEdit_electCount->text().toInt();//k
    //        n = ui->lineEdit_allCount->text().toInt();//n
    //        answer = (factorial(n + k - 1) / factorial(n - 1)) / factorial(k);
    //        ui->lineEdit_answer->setText(QString::number(answer));
    //    }
    //    break;
    //case 3:
    //    n = ui->lineEdit_allCount->text().toInt();//n
    //    answer = factorial(n);
    //    ui->lineEdit_answer->setText(QString::number(answer));
    //    break;
    //}
