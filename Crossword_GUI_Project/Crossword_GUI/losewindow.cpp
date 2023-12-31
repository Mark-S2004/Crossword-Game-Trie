#include "losewindow.h"
#include "ui_losewindow.h"
#include "gamewindow.h"
LoseWindow::LoseWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoseWindow)
{
    ui->setupUi(this);
}

LoseWindow::~LoseWindow()
{
    delete ui;
}

void LoseWindow::on_switchGameButton_clicked()
{
    GameWindow *gameWindow = new GameWindow(this); // Create an instance of WinWindow
    gameWindow->show(); // Show the WinWindow
    hide();
}

void LoseWindow::updateTime(const QString &timeValue) {
    ui->timerLabel->setText("Elapsed Time: " + timeValue);
}



