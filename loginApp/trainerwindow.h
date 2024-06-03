#ifndef TRAINERWINDOW_H
#define TRAINERWINDOW_H

#include <QMainWindow>

namespace Ui {
class trainerWindow;
}

class trainerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit trainerWindow(QString user,QString trainer,QWidget *parent = nullptr);
    ~trainerWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::trainerWindow *ui;
    QString cUser;
    QString cLogin;
};

#endif // TRAINERWINDOW_H
