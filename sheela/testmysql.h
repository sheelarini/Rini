#ifndef TESTMYSQL_H
#define TESTMYSQL_H
#include <QtGui>
#include <QtSql>
#include <QTableView>
#include <QTableWidget>
#include <QWidget>
#include <QMessageBox>

class testmysql
{
public:
    QTableWidget* table;
    QSqlDatabase db;
    void test();
};

#endif // TESTMYSQL_H
