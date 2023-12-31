#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "trie.hpp"
#include <QTimer>
#include <QElapsedTimer>
#include <QTime>
#include <QLabel>
#include <QFont>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();
protected:
    void showEvent(QShowEvent *event) override;
private slots:
    void on_submitBtn_clicked();
    void startTimer();
    void stopTimer();
    void updateTimer();
private:
    Ui::GameWindow *ui;
    Trie t1;
    QTimer *timer;
    QElapsedTimer elapsedTimer;
    QLabel *timerLabel;
    QString timeStr;
};

#endif // GAMEWINDOW_H
