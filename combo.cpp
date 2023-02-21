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

void Combo::on_pushButton_A_clicked() {
    ui->label_type->setText("A");
    operation_type = 1;
}

void Combo::on_pushButton_C_clicked() {
    ui->label_type->setText("C");
    operation_type = 2;
}

void Combo::on_pushButton_P_clicked() {
    ui->label_type->setText("P");
    operation_type = 3;
}

void Combo::on_pushButton_calculate_clicked() {
    int64_t k = 0;
    int64_t n = 0;
    int64_t answer = 0;
    switch (operation_type)
    {
    case 1:
        k = ui->lineEdit_electCount->text().toInt();//k
        n = ui->lineEdit_allCount->text().toInt();//n
        answer = factorial(n) / factorial(n - k);
        ui->lineEdit_answer->setText(QString::number(answer));
        break;
    case 2:
        k = ui->lineEdit_electCount->text().toInt();//k
        n = ui->lineEdit_allCount->text().toInt();//n
        answer = (factorial(n) / factorial(n - k))/factorial(k);
        ui->lineEdit_answer->setText(QString::number(answer));
        break;
    case 3:
        n = ui->lineEdit_allCount->text().toInt();//n
        answer = factorial(n);
        ui->lineEdit_answer->setText(QString::number(answer));
        break;
    }
}