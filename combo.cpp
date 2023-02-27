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

void Combo::on_pushButton_P_calculate_Rep_clicked() {
    std::vector<int64_t> groups;
    int64_t n = 0;
    std::string tmp;
    std::vector<std::string> split_str;
    std::string groups_str = ui->lineEdit_P_n_Rep->text().toStdString();
    for (auto i = 0; i < groups_str.size(); ++i) {
        if (groups_str[i] != ' ' && groups_str[i] != ',') {
            tmp.push_back(groups_str[i]);
        }
        else {
            split_str.push_back(tmp);
            tmp = "";
        }
    }
    if(tmp != "") split_str.push_back(tmp);
    for (auto i = 0; i < split_str.size(); ++i) {
        groups.push_back(std::stoi(split_str[i]));
        n += std::stoi(split_str[i]);
    }
    int64_t answer = factorial(n);
    for (auto i = 0; i < groups.size(); ++i) {
        answer /= factorial(groups[i]);
    }
    ui->lineEdit_P_answer_Rep->setText(QString::number(answer));
}

void Combo::on_pushButton_equalMulti_clicked() {
    int64_t first = std::stoi(ui->lineEdit_firstMulti->text().toStdString());
    int64_t second = std::stoi(ui->lineEdit_secondMulti->text().toStdString());
    ui->lineEdit_answerMulti->setText(QString::number(first * second));
}
void Combo::on_pushButton_equalUnion_clicked() {
    int64_t first = std::stoi(ui->lineEdit_firstUnion->text().toStdString());
    int64_t second = std::stoi(ui->lineEdit_secondUnion->text().toStdString());
    ui->lineEdit_answerUnion->setText(QString::number(first + second));
}