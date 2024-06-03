#include "staffwindow.h"
#include "ui_staffwindow.h"

staffWindow::staffWindow(QString user,QString login,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::staffWindow)
    , cUser(user)
    , cLogin(login)
{
    ui->setupUi(this);
    ui->current_user->setText(cUser);
    ui->login_as->setText(cLogin);
    QPixmap logout(":/rsc/img/logout2.png");
    QIcon icon(logout);
    ui->sign_out->setIcon(icon);
    //ui->sign_out->setToolTip("sign out");
}

staffWindow::~staffWindow()
{
    delete ui;
}

void staffWindow::on_pushButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void staffWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void staffWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void staffWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void staffWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
