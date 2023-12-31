#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString executable_path = QCoreApplication::applicationDirPath();
    QIcon icon(executable_path + "/icon.png");
    setWindowIcon(icon);
    setWindowTitle("Crossword Game");

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


