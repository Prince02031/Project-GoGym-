#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/rsc/img/login.jpg");
    //int w= ui->label_pic->width();
    //int h= ui->label->height();
    ui->label_pic->setPixmap(pix);
    //ui->statusbar->addPermanentWidget(ui->label_3);
    //ui->statusbar->addPermanentWidget(ui->progressBar);
    QWidget::setWindowTitle("login");
    //QWidget::
    //ui->setupUi(this);
    //connect(ui->lineEdit_USERNAME,SIGNAL(returnpressed()),
            //ui->lineEdit_PASSWORD, SLOT(show() ));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString username= ui->lineEdit_USERNAME->text();
    QString password= ui->lineEdit_PASSWORD->text();

    if(/*username=="Prince0203" &&*/ password=="Beatrice400" && ui->comboBox->currentText()=="Admin")
    {
        QMessageBox::information(this,"Login","Welcome to the Prototype");
        hide();
        adminPanel= new primaryWindow(username,ui->comboBox->currentText(), this);
        adminPanel->show();        //secBox= new class secondBox(this);
        //secBox->show();
        //ui->statusbar->showMessage("Welcome to the Prototype",5000);
        //ui->label_3->setText("Welcome to the Prototype");
    }
    else if(username=="Obidit154" && password=="bolbona420" && ui->comboBox->currentText()=="Member")
    {
        QMessageBox::information(this,"Login","Welcome to the GoGym Application");
        hide();
        memberPanel= new memberWindow(username,ui->comboBox->currentText(), this);
        memberPanel->show();
    }
    else if(username=="Rahinur1032" && password=="cpMaster24" && ui->comboBox->currentText()=="Trainer")
    {
        QMessageBox::information(this,"Login","Welcome to the GoGym Application");
        hide();
        trainerPanel= new trainerWindow(username,ui->comboBox->currentText(), this);
        trainerPanel->show();
    }
    else if(username=="Aakash21" && password=="islamiat4241" && ui->comboBox->currentText()=="Staff")
    {
        QMessageBox::information(this,"Login","Welcome to the GoGym Application");
        hide();
        staffPanel= new staffWindow(username,ui->comboBox->currentText(), this);
        staffPanel->show();
    }
    else {
        QMessageBox::warning(this,"login","Username or Password is not correct");
        //ui->statusbar->showMessage("Username or Password is not correct",5000);
         //ui->label_3->setText("Username or Password is not correct");
    }
}


//void MainWindow::on_lineEdit_USERNAME_returnPressed()
//{
    //QString username= ui->lineEdit_USERNAME->text();
    //ui->lineEdit_PASSWORD->show();

//}

