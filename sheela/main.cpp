#include <QtGui>
#include <QtSql>
#include <QTableView>
#include <QApplication>
#include <QWidget>
#include<QTableWidget>
#include<QMessageBox>
#include "testmysql.h"

int main(int argc,char *argv[])
{
QApplication app(argc,argv);
testmysql *t= new testmysql();
t->test();
return app.exec();
}
