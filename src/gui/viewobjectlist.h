#ifndef VIEWOBJECTLIST_H
#define VIEWOBJECTLIST_H

#include <QWidget>
#include <QStandardItemModel>
#include <QModelIndex>

class ViewObjectList : public QWidget
{
    Q_OBJECT
public:
    explicit ViewObjectList(QWidget *parent = nullptr);

public slots:
    void addItemToList(const QString name, const int index);
    void removeItemToList(const QString name);

signals:
    void selectItem(const QModelIndex &index);

private:
    QStandardItemModel *model;

};

#endif // VIEWOBJECTLIST_H
