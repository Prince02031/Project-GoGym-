#include "secondbox.h"
#include "ui_secondbox.h"

secondBox::secondBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondBox)
{
    ui->setupUi(this);
}

secondBox::~secondBox()
{
    delete ui;
}
