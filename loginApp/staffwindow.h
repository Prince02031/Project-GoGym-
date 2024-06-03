#ifndef STAFFWINDOW_H
#define STAFFWINDOW_H

#include <QMainWindow>

namespace Ui {
class staffWindow;
}

class staffWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit staffWindow(QString user,QString staff, QWidget *parent = nullptr);
    ~staffWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::staffWindow *ui;
    QString cUser;
    QString cLogin;

};

#endif // STAFFWINDOW_H
