#include "winwindow.h"
#include "ui_winwindow.h"

WinWindow::WinWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WinWindow)
{
    ui->setupUi(this);
}

WinWindow::~WinWindow()
{
    delete ui;
}
