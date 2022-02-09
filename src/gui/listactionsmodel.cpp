#include "listactionsmodel.h"
#include <QVariant>

ListActionsModel::ListActionsModel(QObject *parent) : QAbstractListModel(parent)
{
    lst << new QString("hola");
    lst << new QString("hola2");
    lst << new QString("hola3");
}

int ListActionsModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return lst.count();

}



QVariant ListActionsModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= lst.size())
            return QVariant();

        if (role == Qt::DisplayRole || role == Qt::EditRole){
            qDebug() << "no se pudop dibjuar";
            return QVariant(tr("holamundo"));

        }

        return QVariant();


}
