#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>
#include <QPushButton>
#include "gamewindow.h"
#include "resultdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void switchToGameWindow();
    void on_submitButton_clicked();
    void updateTimer();

private:
    Ui::MainWindow *ui;
    GameWindow *gameWindow;
    QTimer *timer;
    QTime gameTime; // to store the time
    ResultDialog *resultDialog;
};
#endif // MAINWINDOW_H
