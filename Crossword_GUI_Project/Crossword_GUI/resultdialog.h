// resultdialog.h
#ifndef RESULTDIALOG_H
#define RESULTDIALOG_H

#include <QDialog>
#include <QTime>

namespace Ui {
class ResultDialog;
}

class ResultDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ResultDialog(QWidget *parent = nullptr);
    ~ResultDialog();

    void setTime(const QTime &time);

private:
    Ui::ResultDialog *ui;
};

#endif // RESULTDIALOG_H
