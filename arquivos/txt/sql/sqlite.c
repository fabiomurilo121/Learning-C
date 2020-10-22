//
// Created by Fabio-PC on 22/10/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

int main(int argc, char *argv[]){
    sqlite3 * db = NULL;
    sqlite3_stmt * stmt;
    int i;
    const char * tail;
    const char * sql_query  = "SELECT * FROM phonebook";
    const char * sql_insert = "INSERT INTO phonebook"
                              " (name, phone) VALUES"
                              " ('fulano', '(55) 86 4585-1254')";
    const char * sql_create = "CREATE TABLE phonebook("
                              "name varchar(25), "
                              "phone varchar(20))";

    /* open and create database */
    if(sqlite3_open("my_db.db", &db) != SQLITE_OK)
        return 1;
    if(sqlite3_exec(db, sql_create, NULL, NULL, NULL) != SQLITE_OK)
        printf("table already exist!\n");
    if(sqlite3_exec(db, sql_insert, NULL, NULL, NULL) != SQLITE_OK)
        printf("error: %s!\n", sqlite3_errmsg(db));
    if(sqlite3_prepare(db, sql_query, -1, &stmt, &tail) == SQLITE_OK)
    {
        for(i = 0; i < sqlite3_column_count(stmt); i++)
            printf("%s\t\t", sqlite3_column_name(stmt, i));
        printf("\n");
        while(sqlite3_step(stmt) != SQLITE_DONE)
        {
            for(i = 0; i < sqlite3_column_count(stmt); i++)
                printf("%s\t\t", sqlite3_column_text(stmt, i));
            printf("\n");
        }
        sqlite3_finalize(stmt);
    }
    sqlite3_close(db);
    return 0;
}
