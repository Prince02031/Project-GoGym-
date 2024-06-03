#include "primarywindow.h"
#include "ui_primarywindow.h"
#include <QToolBar>
#include <QMenu>
#include <QStackedWidget>
#include <QIcon>
#include <QPixmap>
primaryWindow::primaryWindow(QString username,QString login, QWidget *parent): QMainWindow(parent)
    , ui(new Ui::primaryWindow)
    , cUser(username)
    , cLogin(login)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Admin");
    //ui->stackedWidget->addWidget();
    //ui->current_user->setText(username);
    ui->current_user->setText(cUser);
    ui->login_as->setText(cLogin);
    QPixmap logout(":/rsc/img/logout2.png");
    QIcon icon(logout);
    ui->sign_out->setIcon(icon);
    //ui->sign_out->setToolTip("sign out");
}

primaryWindow::~primaryWindow()
{
    delete ui;
}

/*primaryWindow::primaryWindow(QString username, QWidget *parent) : QMainWindow(parent)
{
    cUser=username;
    ui->current_user->setText(cUser);
}*/

void primaryWindow::on_pushButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void primaryWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->STstackedWidget->setCurrentIndex(0);
}

void primaryWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->memberStackedWidget->setCurrentIndex(0);
}

void primaryWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void primaryWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->PaymentStackedWidget->setCurrentIndex(0);
}

void primaryWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}




void primaryWindow::on_sign_out_clicked()
{
    this->close();
    //((QWidget*)parent())->show(); //another method for using Qwidget methods in a QObject element
    QWidget::parentWidget()->show();
}



//member pushbuttons function

void primaryWindow::on_memPbutton1_clicked()
{
    ui->memberStackedWidget->setCurrentIndex(2);
}


void primaryWindow::on_memPbutton2_clicked()
{
    ui->memberStackedWidget->setCurrentIndex(3);
}

void primaryWindow::on_memPbutton3_clicked()
{
    ui->memberStackedWidget->setCurrentIndex(4);
}


void primaryWindow::on_memPbutton4_clicked()
{
    ui->memberStackedWidget->setCurrentIndex(5);
}

//staff/trainer pushbuttons function


void primaryWindow::on_STPbutton1_clicked()
{
    ui->STstackedWidget->setCurrentIndex(1);
}



void primaryWindow::on_STPbutton2_clicked()
{
    ui->STstackedWidget->setCurrentIndex(2);
}


void primaryWindow::on_STPbutton3_clicked()
{
    ui->STstackedWidget->setCurrentIndex(3);
}

//payment pushbuttons functions



void primaryWindow::on_payPbutton1_clicked()
{
    ui->PaymentStackedWidget->setCurrentIndex(1);
}




void primaryWindow::on_payPbutton2_clicked()
{
    ui->PaymentStackedWidget->setCurrentIndex(2);
}



void primaryWindow::on_payPbutton3_clicked()
{
    ui->PaymentStackedWidget->setCurrentIndex(3);
}

