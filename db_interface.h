//
// Created by conglb on 3/4/19.
//

#ifndef UNTITLED_DB_INTERFACE_H
#define UNTITLED_DB_INTERFACE_H

#include <mysql.h>
#include <my_global.h>

MYSQL *con;

void subtract(int id, int amount);
void add(int id, int amount);
void db_connect();

#endif //UNTITLED_DB_INTERFACE_H
