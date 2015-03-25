#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void bubu();

private:
    Ui::MainWindow *ui;
    QStringListModel *voz;
    QStringListModel *isp;
    QStringListModel *pol;
};

#endif // MAINWINDOW_H
