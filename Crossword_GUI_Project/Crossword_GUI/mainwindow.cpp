#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    resultDialog(new ResultDialog(this))
{
    ui->setupUi(this);

    timer = new QTimer(this);
     connect(timer, &QTimer::timeout, this, &MainWindow::updateTimer);
    gameTime = QTime(0, 0); // initialize game time to 0
    //Code to transition
    gameWindow = new GameWindow(this);
    // Connect the button's clicked signal to the slot function
    connect(ui->switchGameButton, &QPushButton::clicked, this, &MainWindow::switchToGameWindow);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::switchToGameWindow()
{
    gameWindow->show();  // Show the GameWindow
    hide();             // Hide the MainWindow
}

void MainWindow::on_submitButton_clicked()
{
    timer->stop(); // Stop the timer when the player submits the game
    resultDialog->setTime(gameTime); // Set the time in the result dialog
    resultDialog->exec(); // Show the result dialog
}
void MainWindow::updateTimer()
{
    gameTime = gameTime.addSecs(1); // Increment the game time by 1 second
    ui->timerLabel->setText(gameTime.toString("hh:mm:ss")); // Display the time in the QLabel
}

