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
    bool m_bPressed;
    QPoint m_point;
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);

private slots:
    void pickColor();
    void on_pushButtonRGB_clicked();
    void on_pushButtonHex_clicked();
};

#endif // MAINWINDOW_H
