#include "mainwindow.h"
#include "ballwidget.h"
#include <QPushButton>
#include <QLayout>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget_ = new QWidget(this);
    mainLayout_ = new QGridLayout(mainWidget_);
    button_ = new QPushButton("Press me", mainWidget_);
    ballWidget_ = new BallWidget(mainWidget_);

    button_->setFixedSize(300, 200);

    mainLayout_->addWidget(button_, 0, 0, 1, 1, Qt::AlignCenter);
    mainLayout_->addWidget(ballWidget_, 0, 1, 1, 1,
                           Qt::AlignCenter);
    mainWidget_->setLayout(mainLayout_);

    setCentralWidget(mainWidget_);

    connect(button_, &QPushButton::clicked, this,
            &MainWindow::onButtonClick);
}

MainWindow::~MainWindow()
{

}

void MainWindow::onButtonClick()
{
    qDebug() << "Button clicked";
}
