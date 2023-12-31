#ifndef WINWINDOW_H
#define WINWINDOW_H

#include <QMainWindow>

namespace Ui {
class WinWindow;
}

class WinWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinWindow(QWidget *parent = nullptr);
    ~WinWindow();

private slots:
    void on_switchGameButton_clicked();

public slots:
    void updateTime(const QString &timeValue);
private:
    Ui::WinWindow *ui;
};

#endif // WINWINDOW_H
