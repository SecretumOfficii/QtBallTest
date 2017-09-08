#ifndef BALLWIDGET_H
#define BALLWIDGET_H

#include <QWidget>

class BallWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BallWidget(QWidget *parent = nullptr);
    QSize sizeHint() const {return QSize(640, 480);}

protected:
    void paintEvent(QPaintEvent*);

signals:

public slots:
};

#endif // BALLWIDGET_H
