#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "trie.hpp"

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_submitBtn_clicked(Trie t1);

private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
