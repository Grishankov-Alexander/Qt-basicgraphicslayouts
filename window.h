#ifndef WINDOW_H
#define WINDOW_H

#include <QGraphicsWidget>

class Window : public QGraphicsWidget
{
    Q_OBJECT

public:
    Window(QGraphicsWidget *parent = nullptr);
};

#endif // WINDOW_H
