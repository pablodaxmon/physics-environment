#ifndef LISTACTIONSMODEL_H
#define LISTACTIONSMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QModelIndex>

class ListActionsModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ListActionsModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role  = Qt::DisplayRole) const override;

private:
    QVector<QString*> lst;

};

#endif // LISTACTIONSMODEL_H
