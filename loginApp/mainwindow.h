#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <secondbox.h>
#include <primarywindow.h>
#include <memberwindow.h>
#include <trainerwindow.h>
#include <staffwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Login_clicked();

    //void on_lineEdit_USERNAME_returnPressed();

private:
    Ui::MainWindow *ui;
    secondBox *secBox;
    primaryWindow *adminPanel;
    memberWindow *memberPanel;
    trainerWindow *trainerPanel;
    staffWindow *staffPanel;
};
#endif // MAINWINDOW_H
