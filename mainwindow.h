#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QShortcut>
#include <QDesktopWidget>
#include <QClipboard>
#include <QScreen>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);

private:
    Ui::MainWindow *ui;
    bool m_bPressed;
    QPoint m_point;

private slots:
    void pickColor();
    void on_pushButtonRgb_clicked();
    void on_pushButtonHex_clicked();
};

#endif // MAINWINDOW_H