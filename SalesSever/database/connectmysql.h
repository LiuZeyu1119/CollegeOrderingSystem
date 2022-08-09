#ifndef CONNECTMYSQL_H
#define CONNECTMYSQL_H


class ConnectMysql
{
public:
    ConnectMysql();

    bool createConnection();
    void closeConnection();
};

#endif // CONNECTMYSQL_H
