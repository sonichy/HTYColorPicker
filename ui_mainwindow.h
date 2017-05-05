/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelColor;
    QPushButton *pushButtonRGB;
    QPushButton *pushButtonHex;
    QLabel *labelPos;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(160, 80);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelColor = new QLabel(centralWidget);
        labelColor->setObjectName(QStringLiteral("labelColor"));
        labelColor->setGeometry(QRect(5, 5, 50, 50));
        labelColor->setAutoFillBackground(true);
        pushButtonRGB = new QPushButton(centralWidget);
        pushButtonRGB->setObjectName(QStringLiteral("pushButtonRGB"));
        pushButtonRGB->setGeometry(QRect(60, 5, 100, 20));
        pushButtonRGB->setFlat(true);
        pushButtonHex = new QPushButton(centralWidget);
        pushButtonHex->setObjectName(QStringLiteral("pushButtonHex"));
        pushButtonHex->setGeometry(QRect(60, 25, 100, 20));
        pushButtonHex->setFlat(true);
        labelPos = new QLabel(centralWidget);
        labelPos->setObjectName(QStringLiteral("labelPos"));
        labelPos->setGeometry(QRect(5, 60, 50, 20));
        labelPos->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 45, 91, 31));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        labelColor->setText(QString());
        pushButtonRGB->setText(QApplication::translate("MainWindow", "RGB(255,255,255)", 0));
        pushButtonHex->setText(QApplication::translate("MainWindow", "#FFFFFF", 0));
        labelPos->setText(QApplication::translate("MainWindow", "0,0", 0));
        label->setText(QApplication::translate("MainWindow", "C\351\224\256\345\217\226\350\211\262\n"
"\347\202\271\345\207\273\345\244\215\345\210\266", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
