#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPoint CP=QCursor::pos();
    move(CP.x(),CP.y());
    connect(new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q),this), SIGNAL(activated()),qApp, SLOT(quit()));
    connect(new QShortcut(QKeySequence(Qt::Key_C),this), SIGNAL(activated()),this, SLOT(pickColor()));
    //ui->labelColor->setAutoFillBackground(true); // 必须设置，否则填充背景色无效，可在ui中设置
    pickColor();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseMoveEvent(QMouseEvent * event)
{
    move(event->globalX(),event->globalY());
}

void MainWindow::pickColor()
{
    QPoint CP=QCursor::pos();
    ui->labelPos->setText(QString::number(CP.x())+","+QString::number(CP.y()));
    QPixmap pixmap=QPixmap::grabWindow(QApplication::desktop()->winId());
    QImage image=pixmap.toImage();
    QRgb RGB = image.pixel(CP.x(),CP.y());
    QPalette plt = ui->labelColor->palette();
    plt.setColor(QPalette::Background,QColor(RGB));
    ui->labelColor->setPalette(plt);
    int r=qRed(RGB);
    int g=qGreen(RGB);
    int b=qBlue(RGB);
    ui->pushButtonRGB->setText("RGB(" + QString::number(r) + "," + QString::number(g) + "," + QString::number(b)+")");
    ui->pushButtonHex->setText("#" + QString("%1").arg(r,2,16,QLatin1Char('0')).toUpper() + QString("%1").arg(g,2,16,QLatin1Char('0')).toUpper() + QString("%1").arg(b,2,16,QLatin1Char('0')).toUpper());
}

void MainWindow::on_pushButtonRGB_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(ui->pushButtonRGB->text());
}

void MainWindow::on_pushButtonHex_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(ui->pushButtonHex->text());
}
