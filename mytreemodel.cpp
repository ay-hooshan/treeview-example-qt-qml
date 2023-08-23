#include "mytreemodel.h"

#include <QStandardItemModel>
#include <QStandardItem>

myTreeModel::myTreeModel(QObject *parent)
    : QStandardItemModel(parent)
{
    setColumnCount(1);
    QStandardItem *rootItem = invisibleRootItem();

    QStandardItem *node1 = new QStandardItem;
    QStandardItem *node2 = new QStandardItem;
    QStandardItem *node3 = new QStandardItem;
    QStandardItem *node4 = new QStandardItem;
    QStandardItem *node5 = new QStandardItem;
    QStandardItem *node6 = new QStandardItem;
    QStandardItem *node7 = new QStandardItem;
    QStandardItem *node8 = new QStandardItem;
    QStandardItem *node9 = new QStandardItem;
    QStandardItem *node10 = new QStandardItem;
    QStandardItem *node11 = new QStandardItem;
    QStandardItem *node12 = new QStandardItem;

    node1->setText("node1");
    node2->setText("node2");
    node3->setText("node3");
    node4->setText("node4");
    node5->setText("node5");
    node6->setText("node6");
    node7->setText("node7");
    node8->setText("node8");
    node9->setText("node9");
    node10->setText("node10");
    node11->setText("node11");
    node12->setText("node12");

    rootItem->appendRow(node1);
    node1->appendRow(node2);
    node1->appendRow(node3);
    node2->appendRow(node4);
    node2->appendRow(node5);
    node2->appendRow(node6);
    node3->appendRow(node7);
    node4->appendRow(node8);
    node5->appendRow(node9);
    node3->appendRow(node10);
    node10->appendRow(node11);
    node11->appendRow(node12);
}
