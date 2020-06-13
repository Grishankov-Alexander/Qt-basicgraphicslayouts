#ifndef LAYOUTITEM_H
#define LAYOUTITEM_H

#include <QGraphicsLayoutItem>
#include <QGraphicsItem>

class LayoutItem : public QGraphicsLayoutItem, public QGraphicsItem
{
public:
    LayoutItem(QGraphicsItem *parent = nullptr);
    ~LayoutItem();
    void setGeometry(const QRectF &rect) override;
    QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr) override;

private:
    QPixmap *m_pix;
};

#endif // LAYOUTITEM_H
