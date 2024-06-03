#ifndef PRIMARYWINDOW_H
#define PRIMARYWINDOW_H

#include <QMainWindow>

namespace Ui {
class primaryWindow;
}

class primaryWindow : public QMainWindow
{
    Q_OBJECT

public:
    //explicit primaryWindow(QWidget *parent = nullptr);
    explicit primaryWindow(QString user, QString admin, QWidget *parent = nullptr);

    ~primaryWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();




    void on_sign_out_clicked();

    void on_pushButton_6_clicked();

    void on_memPbutton1_clicked();

    void on_memPbutton2_clicked();

    void on_memPbutton3_clicked();

    void on_memPbutton4_clicked();

    void on_STPbutton1_clicked();

    void on_STPbutton2_clicked();

    void on_STPbutton3_clicked();

    void on_payPbutton1_clicked();

    void on_payPbutton2_clicked();

    void on_payPbutton3_clicked();

private:
    Ui::primaryWindow *ui;
    QString cUser;
    QString cLogin;
};

#endif // PRIMARYWINDOW_H
