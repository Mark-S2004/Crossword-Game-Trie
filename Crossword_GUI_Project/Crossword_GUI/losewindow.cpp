#include "losewindow.h"
#include "ui_losewindow.h"
#include "gamewindow.h"
LoseWindow::LoseWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoseWindow)
{
    ui->setupUi(this);
    setWindowTitle("Crossword Game");
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

void LoseWindow::updateCorrectNumber(const int &correctNumber, const int &trieSize) {
    QString scoreMessage = QString::number(correctNumber) + QString(" out of ") + QString::number(trieSize);
    if (trieSize > 1) {
        scoreMessage += QString(" words");
    } else {
        scoreMessage += QString(" word");
    }
    if (correctNumber == 1) {
        scoreMessage += QString(" is correct");
    } else {
        scoreMessage += QString(" are correct");
    }
    ui->scoreLabel->setText(scoreMessage);
}



