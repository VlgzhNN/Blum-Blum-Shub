/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *generateButton;
    QLineEdit *lengthInput;
    QLineEdit *modulusOutput;
    QLabel *label;
    QLabel *label_2;
    QChartView *chartView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1316, 920);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        generateButton = new QPushButton(centralwidget);
        generateButton->setObjectName("generateButton");
        generateButton->setGeometry(QRect(60, 140, 261, 61));
        lengthInput = new QLineEdit(centralwidget);
        lengthInput->setObjectName("lengthInput");
        lengthInput->setGeometry(QRect(530, 160, 113, 26));
        modulusOutput = new QLineEdit(centralwidget);
        modulusOutput->setObjectName("modulusOutput");
        modulusOutput->setGeometry(QRect(800, 160, 113, 26));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 120, 211, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(800, 130, 151, 20));
        chartView = new QChartView(centralwidget);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(279, 340, 441, 201));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1316, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "\320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\264\320\273\320\270\320\275\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\262\320\276\320\264 \320\274\320\276\320\264\321\203\320\273\321\217 M=p*q", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
