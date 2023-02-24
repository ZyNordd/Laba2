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

void Combo::on_pushButton_A_calculate_clicked() {
    int64_t k = ui->lineEdit_A_k->text().toInt();//k
    int64_t n = ui->lineEdit_A_n->text().toInt();//n
    int64_t answer = factorial(n) / factorial(n - k);
    ui->lineEdit_A_answer->setText(QString::number(answer));
}

void Combo::on_pushButton_A_calculate_Rep_clicked() {
    int64_t k = ui->lineEdit_A_k_Rep->text().toInt();//k
    int64_t n = ui->lineEdit_A_n_Rep->text().toInt();//n
    int64_t answer = pow(n, k);
    ui->lineEdit_A_answer_Rep->setText(QString::number(answer));
}

void Combo::on_pushButton_C_calculate_clicked() {
    int64_t k = ui->lineEdit_C_k->text().toInt();//k
    int64_t n = ui->lineEdit_C_n->text().toInt();//n
    int64_t answer = (factorial(n) / factorial(n - k)) / factorial(k);
    ui->lineEdit_C_answer->setText(QString::number(answer));
}

void Combo::on_pushButton_C_calculate_Rep_clicked() {
    int64_t k = ui->lineEdit_C_k_Rep->text().toInt();//k
    int64_t n = ui->lineEdit_C_n_Rep->text().toInt();//n
    int64_t answer = (factorial(n + k - 1) / factorial(n - 1)) / factorial(k);
    ui->lineEdit_C_answer_Rep->setText(QString::number(answer));
}

void Combo::on_pushButton_P_calculate_clicked() {
    int64_t n = ui->lineEdit_P_n->text().toInt();//n
    int64_t answer = factorial(n);
    ui->lineEdit_P_answer->setText(QString::number(answer));
}

