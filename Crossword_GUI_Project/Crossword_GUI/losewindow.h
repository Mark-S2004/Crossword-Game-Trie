#ifndef LOSEWINDOW_H
#define LOSEWINDOW_H

#include <QMainWindow>

namespace Ui {
class LoseWindow;
}

class LoseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoseWindow(QWidget *parent = nullptr);
    ~LoseWindow();

private slots:
    void on_switchGameButton_clicked();

public slots:
    void updateTime(const QString &timeValue);
private:
    Ui::LoseWindow *ui;
};

#endif // LOSEWINDOW_H
