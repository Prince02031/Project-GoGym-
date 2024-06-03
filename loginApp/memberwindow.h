#ifndef MEMBERWINDOW_H
#define MEMBERWINDOW_H

#include <QMainWindow>

namespace Ui {
class memberWindow;
}

class memberWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberWindow(QString user,QString member, QWidget *parent = nullptr);
    ~memberWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::memberWindow *ui;
    QString cUser;
    QString cLogin;

};

#endif // MEMBERWINDOW_H
