#ifndef SQLTEST_H
#define SQLTEST_H

//#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
//#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class sqltestData;

class sqltest
{
public:
    sqltest();
    sqltest(const sqltest &);
    sqltest &operator=(const sqltest &);
    ~sqltest();

private:
    QSharedDataPointer<sqltestData> data;
};

#endif // SQLTEST_H
