#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class QGridLayout;
class BallWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *mainWidget_;
    QGridLayout *mainLayout_;

    QPushButton *button_;
    BallWidget *ballWidget_;

private slots:
    void onButtonClick();
};

#endif // MAINWINDOW_H
