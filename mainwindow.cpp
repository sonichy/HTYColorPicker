#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    //setWindowOpacity(0.8);
    QPoint point = QCursor::pos();
    move(point.x(), point.y());
    connect(new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q),this), SIGNAL(activated()), qApp, SLOT(quit()));
    connect(new QShortcut(QKeySequence(Qt::Key_C),this), SIGNAL(activated()), this, SLOT(pickColor()));
    //ui->labelColor->setAutoFillBackground(true); // 必须设置，否则填充背景色无效，可在ui中设置
    pickColor();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pickColor()
{
    QPoint point = QCursor::pos();
    ui->labelPos->setText(QString::number(point.x()) + "," + QString::number(point.y()));
    QScreen *screen = QApplication::primaryScreen();
    QPixmap pixmap = screen->grabWindow(QApplication::desktop()->winId());
    QImage image = pixmap.toImage();
    QRgb rgb = image.pixel(point.x(), point.y());
    QPalette plt = ui->labelColor->palette();
    plt.setColor(QPalette::Background, QColor(rgb));
    ui->labelColor->setPalette(plt);
    int r = qRed(rgb);
    int g = qGreen(rgb);
    int b = qBlue(rgb);
    ui->pushButtonRgb->setText("rgb(" + QString::number(r) + "," + QString::number(g) + "," + QString::number(b) + ")");
    ui->pushButtonHex->setText("#" + QString("%1").arg(r,2,16,QLatin1Char('0')) + QString("%1").arg(g,2,16,QLatin1Char('0')) + QString("%1").arg(b,2,16,QLatin1Char('0')));
}

void MainWindow::on_pushButtonRgb_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(ui->pushButtonRgb->text());
}

void MainWindow::on_pushButtonHex_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(ui->pushButtonHex->text());
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_bPressed = true;
        m_point = event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bPressed)
        move(event->pos() - m_point + pos());
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bPressed = false;
}