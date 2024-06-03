#include "trainerwindow.h"
#include "ui_trainerwindow.h"

trainerWindow::trainerWindow(QString user, QString login, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::trainerWindow)
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

trainerWindow::~trainerWindow()
{
    delete ui;
}

void trainerWindow::on_pushButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void trainerWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void trainerWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void trainerWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void trainerWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
