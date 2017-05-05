#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QShortcut>
#include <QDesktopWidget>
#include <QClipboard>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void mouseMoveEvent(QMouseEvent * event);

private slots:
    void pickColor();
    void on_pushButtonRGB_clicked();
    void on_pushButtonHex_clicked();
};

#endif // MAINWINDOW_H
