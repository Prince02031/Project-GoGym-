#ifndef SECONDBOX_H
#define SECONDBOX_H

#include <QDialog>

namespace Ui {
class secondBox;
}

class secondBox : public QDialog
{
    Q_OBJECT

public:
    explicit secondBox(QWidget *parent = nullptr);
    ~secondBox();

private:
    Ui::secondBox *ui;
};

#endif // SECONDBOX_H
