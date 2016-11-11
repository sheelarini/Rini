#include "sqltest.h"

class sqltestData : public QSharedData
{
public:

};

sqltest::sqltest() : data(new sqltestData)
{

}

sqltest::sqltest(const sqltest &rhs) : data(rhs.data)
{

}

sqltest &sqltest::operator=(const sqltest &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

sqltest::~sqltest()
{

}
