// resultdialog.cpp
#include "resultdialog.h"
#include "ui_resultdialog.h"

ResultDialog::ResultDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResultDialog)
{
    ui->setupUi(this);
}

ResultDialog::~ResultDialog()
{
    delete ui;
}

void ResultDialog::setTime(const QTime &time)
{
    ui->timeLabel->setText(time.toString("hh:mm:ss"));
}
