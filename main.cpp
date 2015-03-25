#include "mainwindow.h"
#include <QApplication>
#include <QComboBox>
#include <QtGui>
#include <QString>
#include <QTextStream>
#include <qtextcodec.h>
#include <iostream>

int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QComboBox comboBox1;
    QComboBox comboBox2;
    QComboBox comboBox3;
    QLineEdit lineEdit1;
    QLineEdit lineEdit2;
    QPushButton MyPushButton1;
    return a.exec();
}
