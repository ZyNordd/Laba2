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

