#ifndef MYTREEMODEL_H
#define MYTREEMODEL_H

#include <QAbstractItemModel>
#include <QStandardItemModel>

class myTreeModel : public QStandardItemModel
{
    Q_OBJECT

public:
    explicit myTreeModel(QObject *parent = nullptr);

private:
};

#endif // MYTREEMODEL_H
