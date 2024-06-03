#include "memberwindow.h"
#include "ui_memberwindow.h"

memberWindow::memberWindow(QString username, QString login, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::memberWindow)
    , cUser(username)
    , cLogin(login)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("Member");
    ui->current_user->setText(cUser);
    ui->login_as->setText(cLogin);
    QPixmap logout(":/rsc/img/logout2.png");
    QIcon icon(logout);
    ui->sign_out->setIcon(icon);
    //ui->sign_out->setToolTip("sign out");
}

memberWindow::~memberWindow()
{
    delete ui;
}



void memberWindow::on_pushButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void memberWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void memberWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void memberWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void memberWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

