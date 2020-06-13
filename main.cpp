#include "window.h"

#include <QApplication>
#include <QGraphicsView>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QGraphicsScene scene;
    Window *window = new Window;
    scene.addItem(window);
    QGraphicsView view(&scene);
    view.resize(600, 600);
    view.show();
    return app.exec();
}
