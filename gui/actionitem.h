#ifndef ACTIONITEM_H
#define ACTIONITEM_H

#include <QWidget>

class ActionItem : public QWidget
{
    Q_OBJECT
public:
    explicit ActionItem(QWidget *parent = nullptr);


protected:
    void paintEvent(QPaintEvent* event) override;

signals:
};

#endif // ACTIONITEM_H
