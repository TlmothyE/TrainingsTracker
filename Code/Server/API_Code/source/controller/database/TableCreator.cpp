//
// Created by jeremias on 17.05.22.
//

#include "TableCreator.h"

namespace controller::database {
    void TableCreator::createDatabaseTables() {
        std::vector<std::string> createTableList{
                "CREATE TABLE IF NOT EXISTS TRAININGSPLAN (ID INT PRIMARY KEY NOT NULL, DATE TEXT);",
                R"(create table users ("userID" serial constraint users_pk primary key, name TEXT, password TEXT); create unique index IF NOT EXISTS users_userid_uindex on users ("userID");)",
                "CREATE TABLE IF NOT EXISTS PRODUCTS;",
                R"(create table if not exists workoutroutines("workoutroutineID" serial constraint workoutroutines_pk primary key, "Date" TEXT); create unique index if not exists workoutroutines_workoutroutineid_uindex on workoutroutines ("workoutroutineID");)",
                "CREATE TABLE IF NOT EXISTS CALORIETRACKER;",
                "CREATE TABLE IF NOT EXISTS EXERCISES;"
        };

        pqxx::work W(*C);

        std::for_each(createTableList.begin(), createTableList.end(), [&](const auto &item) {
            W.exec(item);
        });

        W.commit();
    }
} // database