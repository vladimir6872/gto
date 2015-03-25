#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QLineEdit>
#include <iostream>
#include <QStringListModel>
#include <QStackedLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Метеор 1.0"));
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QComboBox comboBox1;
    QComboBox comboBox2;
    QComboBox comboBox3;
    QLineEdit lineEdit1;
    QLineEdit lineEdit2;
    QPushButton MyPushButton1;
    QString str1, arg2, arg3, arg4;
    voz = new QStringListModel(this);
    QStringList list1;
    list1.append("6-8 лет");
    list1.append("9-10 лет");
    list1.append("11-12 лет");
    list1.append("13-15 лет");
    list1.append("16-17 лет");
    voz->setStringList(list1);
    ui->comboBox1->setModel(voz);
    isp = new QStringListModel(voz);
    QStringList list2;
    list2.append("Челночный бег 3х10м (сек)");
    list2.append("Бег на 30 м (сек)");
    list2.append("Смешанное передвижение 1км (без учета времени)");
    list2.append("Прыжок в длину с места двумя ногами (см)");
    list2.append("Подтягивание из виса на высокой перекладине (кол-во раз)");
    list2.append("Подтягивание из виса лежа на полу (кол-во раз)");
    list2.append("Сгибание и разгибание рук в упоре лёжа на полу (кол-во раз)");
    list2.append("Наклон вперед из положения стоя с прямыми ногами на полу (достать пол)");
    list2.append("Метание теннисного мяча в цель (кол-во попаданий");
    list2.append("Бег на лыжах на 1 км (мин.,сек.)");
    list2.append("Бег на лыжах на 2 км (мин.,сек.)");
    list2.append("Кросс на 1 км по пересечённой местности");
    list2.append("Плавание без учёта времени (м)");//
    list2.append("Бег на 60м (сек)");
    list2.append("Бег на 1км (мин.,сек)");
    list2.append("Прыжок в длину с разбега (см)");
    list2.append("Прыжок в длину с места двумя ногами (см)");
    list2.append("Подтягивание из виса на высокой перекладине (кол-во раз)");
    list2.append("Подтягивание из виса лежа на низкой перекладине (кол-во раз)");
    list2.append("Сгибание и разгибание рук в упоре лежа на полу (кол-во раз)");
    list2.append("Наклон вперёд из положения стоя с прямыми ногами на полу (достать пол)");
    list2.append("Метание мяча весом 150 г (м)");
    list2.append("Бег на лыжах на 1 км (мин.,сек.)");
    list2.append("Бег на лыжах на 2 км (Без учёта времени)");
    list2.append("Кросс на 2 км по пересечённой местности");
    list2.append("Плавание без учёта времени (м)");//
    list2.append("Бег на 60 м (сек)");
    list2.append("Бег на 1,5 км (мин.,сек)");
    list2.append("Бег на 2 км (мин.,сек)");
    list2.append("Прыжок в длину с разбега (см)");
    list2.append("Прыжок в длину с места толчком двумя ногами (см)");
    list2.append("Подтягивание из виса на высокой перекладине (кол-во раз)");
    list2.append("Подтягивание из виса лёжа на низкой перекладине (кол-во раз)");
    list2.append("Сгибание и разгибание рук в упоре лежа на полу (кол-во раз)");
    list2.append("Подтягивание из виса лежа на полу (кол-во раз)");
    list2.append("Метание мяча весом 150 г (м)");
    list2.append("Бег на лыжах на 2 км (мин.,сек.)");
    list2.append("Бег на лыжах на 3 км (мин.,сек.)");
    list2.append("Кросс на 3 км по пересечённой местности");
    list2.append("Плавание 50 м (мин.,сек.)");
    list2.append("Наклон вперед из положения стоя с прямыми ногами на полу (достать пол)");
    list2.append("Стрельба из пневматической винтовки из положения сидя или стоя с опорой локтей о стол или стойку, дистанция - 5 м (очки)");
    list2.append("Туристический поход с проверкой туристических навыков");//
    list2.append("Бег на 60 м (сек.)");
    list2.append("Бег на 2 км (мин.,сек)");
    list2.append("Бег на 3 км (мин.,сек)");
    list2.append("Прыжок в длину с разбега (см)");
    list2.append("Прыжок в длину с места толчком двумя ногами (см)");
    list2.append("Подтягивание из виса на высокой перекладине (кол-во раз)");
    list2.append("Подтягивание из виса лёжа на низкой перекладине (кол-во раз)");
    list2.append("Сгибание и разгибание рук в упоре лёжа на полу (кол-во раз)");
    list2.append("Поднимание туловища из положения лёжа на спине (кол-во раз 1 мин.)");
    list2.append("Наклон вперёд из положения стоя с прямыми ногами на полу (достать пол)");
    list2.append("Метание мяча весом 150 г (м)");
    list2.append("Бег на лыжах на 3 км (мин.,сек.)");
    list2.append("Бег на лыжах на 5 км (мин.,сек.)");
    list2.append("Кросс на 3 км по пересечённой местности");
    list2.append("Плавание на 50 м (мин.,сек.)");
    list2.append("Стрельба из пневматической винтовки из положения сидя или стоя с опорой локтей о стол или стойку, дистанция - 10 м (очки)");
    list2.append("Стрельба из электронного оружия из положения сидя или стоя с опорой локтей о стол или стойку, дистанция - 10 м (очки)");
    list2.append("Туристический поход с проверкой туристических навыков");//
    list2.append("Бег на 100 м (сек.)");
    list2.append("Бег на 2 км (мин.,сек)");
    list2.append("Бег на 3 км (мин.,сек)");
    list2.append("Прыжок в длину с разбега (см)");
    list2.append("Прыжок в длину с места толчком двумя ногами (см)");
    list2.append("Подтягивание из виса на высокой перекладине (кол-во раз)");
    list2.append("Рывок гири (кол-во раз)");
    list2.append("Подтягивание из виса лёжа на низкой перекладине (кол-во раз)");
    list2.append("Сгибание и разгибание рук в упоре лёжа на полу (кол-во раз)");
    list2.append("Поднимание туловища из положения лёжа на спине (кол-во раз 1 мин.)");
    list2.append("Наклон вперёд из положения стоя с прямыми ногами на гимнастической скамье (см)");
    list2.append("Метание мяча весом 700г (м)");
    list2.append("Метание мяча весом 500г (м)");
    list2.append("Бег на лыжах 3 км (мин.,сек)");
    list2.append("Бег на лыжах 5 км (мин.,сек)");
    list2.append("Кросс на 3 км по пересечённой местности");
    list2.append("Кросс на 5 км по пересечённой местности");
    list2.append("Плавание на 50 м (мин.,сек.)");
    list2.append("Стрельба из пневматической винтовки из положения сидя или стоя с опорой локтей о стол или стойку, дистанция 10 м (очки)");
    list2.append("Стрельба из электронного оружия из положения сидя или стоя с опорой локтей о стол или стойку, дистанция 10м (очки)");
    list2.append("Туристический поход с проверкой туристических навыков");//
    isp->setStringList(list2);
    ui->comboBox2->setModel(isp);
    pol = new QStringListModel(isp);
    QStringList list3;
    list3.append("Мужской");
    list3.append("Женский");
    pol->setStringList(list3);
    ui->comboBox3->setModel(pol);
    QObject::connect(ui->MyPushButton1, SIGNAL(clicked()), this, SLOT(bubu()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(0, "О программе", "Метеор 1.0. Разработчик: Сухоруков Владимир (vk.com/vladimir6872). Дата релиза: 25.03.2015. Город Тамбов.");
}
void MainWindow::bubu()
{
    float b;
    QString str1 = ui->lineEdit1->text();
    b=str1.toFloat();
    switch(ui->comboBox1->currentIndex())
    {
    case 0:
        switch(ui->comboBox2->currentIndex())
        {
         case 0:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>10.4)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>10.1 && b<=10.4)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>9.2 && b<=10.1)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=9.2)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>10.9)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>10.7 && b<=10.9)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>9.7 && b<=10.7)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=9.7)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 1:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>6.9)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>6.7 && b<=6.9)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>5.9 && b<=6.7)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=5.9)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>7.2)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>7.0 && b<=7.2)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>6.2 && b<=7.0)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=6.2)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 2:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            ui->lineEdit2->setText("Без учёта времени");
            break;
            case 1:
            ui->lineEdit2->setText("Без учёта времени");
            break;
            }
         break;
         case 3:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<115)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<120 && b>=115)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<140 && b>=120)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=140)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<110)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<115 && b>=110)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<135 && b>=115)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=135)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 4:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<2)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<3 && b>=2)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<4 && b>=3)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=4)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            }
         break;
         case 5:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<5)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<6 && b>=5)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<13 && b>=6)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=13)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<4)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<5 && b>=4)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<11 && b>=5)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=11)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 6:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<7)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<9 && b>=7)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<17 && b>=9)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=17)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<4)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<5 && b>=4)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<11 && b>=5)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=11)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 7:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            }
         break;
         case 8:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<2)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<3 && b>=2)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<4 && b>=3)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=4)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<2)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<3 && b>=2)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<4 && b>=3)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=4)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 9:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 10:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 11:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<10)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<10 && b>=10)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<15 && b>=10)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=15)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<10)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<10 && b>=10)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<15 && b>=10)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=15)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
        }
    break;
    case 1:
        switch(ui->comboBox2->currentIndex())
        {
         case 0:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>12.0)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>11.6 && b<=12.0)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>10.5 && b<=11.6)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=10.5)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>12.9)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>12.3 && b<=12.9)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>11.0 && b<=12.3)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=11.0)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 1:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>7.10)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>6.10 && b<=7.10)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>4.50 && b<=6.10)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=4.50)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>6.50)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>6.30 && b<=6.50)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>6.00 && b<=6.30)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=6.00)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 2:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<190)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<220 && b>=190)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<290 && b>=220)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=290)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<190)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<200 && b>=190)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<260 && b>=200)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=260)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 3:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<130)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<140 && b>=130)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<160 && b>=140)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=160)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<125)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<130 && b>=125)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<150 && b>=130)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=150)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 4:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<2)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<3 && b>=2)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<5 && b>=3)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=5)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            }
         break;
         case 5:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            case 1:
            if(b<7)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<9 && b>=7)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<15 && b>=9)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=15)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 6:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<9)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<12 && b>=9)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<16 && b>=12)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=16)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<5)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<7 && b>=5)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<12 && b>=7)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=12)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 7:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            }
         break;
         case 8:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<24)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<27 && b>=24)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<32 && b>=27)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=32)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<13)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<15 && b>=13)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<17 && b>=15)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=17)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 9:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>8.15)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>7.45 && b<=8.15)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>6.45 && b<=7.45)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=6.45)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>8.40)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>8.20 && b<=8.40)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>7.30 && b<=8.20)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=7.30)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 10:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 11:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 12:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<25)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<25 && b>=25)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<50 && b>=25)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=50)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<25)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<25 && b>=25)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<50 && b>=25)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=50)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         }
    break;
    case 2:
        switch(ui->comboBox2->currentIndex())
        {
         case 0:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>11.8)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>10.8 && b<=11.8)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>9.9 && b<=10.8)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=9.9)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>11.4)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>11.2 && b<=11.4)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>10.3 && b<=11.2)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=10.3)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 1:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>8.35)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>7.55 && b<=8.35)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>7.10 && b<=7.55)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=7.10)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>8.55)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>8.35 && b<=8.55)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>8.00 && b<=8.35)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=8.00)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 2:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
                if(b>10.25)
                {
                ui->lineEdit2->setText("Без медали");
                }
                else
                if(b>10.00 && b<=10.25)
                {
                ui->lineEdit2->setText("Бронза");
                }
                else
                if(b>9.30 && b<=10.00)
                {
                ui->lineEdit2->setText("Серебро");
                }
                else
                if(b<=9.30)
                {
                ui->lineEdit2->setText("Золото");
                }
                break;
                case 1:
                if(b>12.30)
                {
                ui->lineEdit2->setText("Без медали");
                }
                else
                if(b>12.00 && b<=12.30)
                {
                ui->lineEdit2->setText("Бронза");
                }
                else
                if(b>11.30 && b<=12.00)
                {
                ui->lineEdit2->setText("Серебро");
                }
                else
                if(b<=11.30)
                {
                ui->lineEdit2->setText("Золото");
                }
                break;
                }
         break;
         case 3:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<280)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<290 && b>=280)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<330 && b>=290)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=330)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<240)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<260 && b>=240)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<300 && b>=260)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=300)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 4:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<150)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<160 && b>=150)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<175 && b>=160)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=175)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<140)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<145 && b>=140)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<165 && b>=145)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=165)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 5:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<3)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<4 && b>=3)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<7 && b>=4)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=7)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            }
         break;
         case 6:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            case 1:
            if(b<9)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<11 && b>=9)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<17 && b>=11)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=17)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 7:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<12)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<14 && b>=12)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<20 && b>=14)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=20)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<7)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<8 && b>=7)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<14 && b>=8)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=14)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 8:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<25)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<28 && b>=25)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<34 && b>=28)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=34)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<14)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<18 && b>=14)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<22 && b>=18)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=22)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 9:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b>14.10)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>13.50 && b<=14.10)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>13.00 && b<=13.50)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=13.00)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b>14.50)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b>14.30 && b<=14.50)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b>13.50 && b<=14.30)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b<=13.50)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 10:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 11:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 12:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<=0.50)
            {
            ui->lineEdit2->setText("Золото");
            }
            else
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            case 1:
            if(b<=1.05)
            {
            ui->lineEdit2->setText("Золото");
            }
            else
            {
            ui->lineEdit2->setText("Без учёта времени");
            }
            break;
            }
         break;
         case 13:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("-----");
            }
            break;
            }
         break;
         case 14:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            if(b<10)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<15 && b>=10)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<20 && b>=15)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=20)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            case 1:
            if(b<10)
            {
            ui->lineEdit2->setText("Без медали");
            }
            else
            if(b<15 && b>=10)
            {
            ui->lineEdit2->setText("Бронза");
            }
            else
            if(b<20 && b>=15)
            {
            ui->lineEdit2->setText("Серебро");
            }
            else
            if(b>=20)
            {
            ui->lineEdit2->setText("Золото");
            }
            break;
            }
         break;
         case 15:
            switch(ui->comboBox3->currentIndex())
            {
            case 0:
            {
            ui->lineEdit2->setText("В соответствии с возрастными требованиями");
            }
            break;
            case 1:
            {
            ui->lineEdit2->setText("В соответствии с возрастными требованиями");
            }
            break;
            }
         break;
        }
    break;
    case 3:
        switch(ui->comboBox2->currentIndex())
        {
        case 0:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>10.0)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>9.7 && b<=10.0)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>8.7 && b<=9.7)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=8.7)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b>10.9)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>10.6 && b<=10.9)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>9.6 && b<=10.6)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=9.6)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 1:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>9.55)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>9.30 && b<=9.55)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>9.00 && b<=9.30)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=9.00)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b>12.10)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>11.40 && b<=12.10)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>11.00 && b<=11.40)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=11.00)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 2:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 3:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<330)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<350 && b>=330)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<390 && b>=350)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=390)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<280)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<290 && b>=280)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<330 && b>=290)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=330)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 4:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<175)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<185 && b>=175)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<200 && b>=185)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=200)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<150)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<155 && b>=150)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<175 && b>=155)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=175)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 5:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<4)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<6 && b>=4)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<10 && b>=6)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=10)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 6:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           if(b<9)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<11 && b>=9)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<18 && b>=11)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=18)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 7:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           if(b<7)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<9 && b>=7)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<15 && b>=9)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=15)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 8:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<30)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<36 && b>=30)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<47 && b>=36)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=47)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<25)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<30 && b>=25)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<40 && b>=30)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=40)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 9:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 10:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<30)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<35 && b>=30)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<40 && b>=35)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=40)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<18)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<21 && b>=18)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<26 && b>=21)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=26)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 11:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>18.45)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>17.45 && b<=18.45)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>16.30 && b<=17.45)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=16.30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b>22.30)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>21.30 && b<=22.30)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>19.30 && b<=21.30)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=19.30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 12:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>28.00)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>27.15 && b<=26.00)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>26.00 && b<=27.15)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=26.00)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 13:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           }
        break;
        case 14:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<=0.43)
           {
           ui->lineEdit2->setText("Золото");
           }
           else
           {
               ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           case 1:
           if(b<=1.05)
           {
           ui->lineEdit2->setText("Золото");
           }
           else
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           }
        break;
        case 15:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<15)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<20 && b>=15)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<25 && b>=20)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=25)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<15)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<20 && b>=15)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<25 && b>=20)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=25)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 16:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<18)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<25 && b>=18)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<30 && b>=25)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<18)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<25 && b>=18)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<30 && b>=25)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 17:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("В соответствии с возрастными требованиями");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("В соответствии с возрастными требованиями");
           }
           break;
           }
        break;
        }
    break;
    case 4:
        switch(ui->comboBox2->currentIndex())
        {
        case 0:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>14.6)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>14.3 && b<=14.6)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>13.8 && b<=14.3)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=13.8)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b>18.0)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>18.0 && b<=17.6)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>17.6 && b<=16.3)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=16.3)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 1:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>9.20)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>8.50 && b<=9.20)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>7.50 && b<=8.50)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=7.50)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b>11.50)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>11.20 && b<=11.50)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>9.50 && b<=11.20)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=9.50)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 2:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>15.10)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>14.40 && b<=15.10)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>13.10 && b<=14.40)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=13.10)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 3:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<360)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<380 && b>=360)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<440 && b>=380)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=440)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<310)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<320 && b>=310)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<360 && b>=320)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=360)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 4:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<200)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<210 && b>=200)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<230 && b>=210)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=230)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<160)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<170 && b>=160)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<185 && b>=170)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=185)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 5:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<8)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<10 && b>=8)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<13 && b>=10)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=13)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 6:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<15)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<25 && b>=15)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<35 && b>=25)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=35)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 7:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           if(b<11)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<13 && b>=11)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<19 && b>=13)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=19)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 8:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           if(b<9)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<10 && b>=9)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<16 && b>=10)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=16)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 9:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<30)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<40 && b>=30)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<50 && b>=40)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=50)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<20)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<30 && b>=20)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<40 && b>=30)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=40)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 10:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<6)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<8 && b>=6)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<13 && b>=8)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=13)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<7)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<9 && b>=7)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<16 && b>=9)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=16)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 11:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<27)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<32 && b>=27)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<38 && b>=32)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=38)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 12:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           if(b<13)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<17 && b>=13)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<21 && b>=17)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=21)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 13:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           if(b>19.15)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>18.45 && b<=19.15)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>17.30 && b<=18.45)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=17.30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 14:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b>25.40)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b>25.00 && b<=25.40)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b>23.40 && b<=25.00)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b<=23.40)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 15:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           }
        break;
        case 16:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           case 1:
           {
           ui->lineEdit2->setText("-----");
           }
           break;
           }
        break;
        case 17:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<=0.41)
           {
           ui->lineEdit2->setText("Золото");
           }
           else
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           case 1:
           if(b<=1.10)
           {
           ui->lineEdit2->setText("Золото");
           }
           else
           {
           ui->lineEdit2->setText("Без учёта времени");
           }
           break;
           }
        break;
        case 18:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<15)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<20 && b>=15)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<25 && b>=20)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=25)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<15)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<20 && b>=15)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<25 && b>=20)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=25)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 19:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           if(b<18)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<25 && b>=18)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<30 && b>=25)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           case 1:
           if(b<18)
           {
           ui->lineEdit2->setText("Без медали");
           }
           else
           if(b<25 && b>=18)
           {
           ui->lineEdit2->setText("Бронза");
           }
           else
           if(b<30 && b>=25)
           {
           ui->lineEdit2->setText("Серебро");
           }
           else
           if(b>=30)
           {
           ui->lineEdit2->setText("Золото");
           }
           break;
           }
        break;
        case 20:
           switch(ui->comboBox3->currentIndex())
           {
           case 0:
           {
               ui->lineEdit2->setText("В соответствии с возрастными требованиями");
           }
           break;
           case 1:
           {
               ui->lineEdit2->setText("В соответствии с возрастными требованиями");
           }
           break;
           }
        break;
        }
    break;
    }
}
