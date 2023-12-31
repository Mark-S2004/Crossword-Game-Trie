#include "winwindow.h"
#include "ui_winwindow.h"
#include "gamewindow.h"
WinWindow::WinWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WinWindow)
{
    ui->setupUi(this);
    setWindowTitle("Crossword Game");
}

WinWindow::~WinWindow()
{
    delete ui;
}


void WinWindow::on_switchGameButton_clicked()
{
    GameWindow *gameWindow = new GameWindow(this); // Create an instance of WinWindow
    gameWindow->show(); // Show the WinWindow
    hide();
}

void WinWindow::updateTime(const QString &timeValue) {
    ui->timerLabel->setText("Elapsed Time: " + timeValue);
}

