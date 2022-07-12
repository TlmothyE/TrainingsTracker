//
// Created by jeremias on 17.05.22.
//

#ifndef API_CODE_TABLECREATOR_H
#define API_CODE_TABLECREATOR_H

#include "DBConnector.h"
#include "string"
#include "vector"
#include "pqxx/pqxx"

namespace controller::database {

    class TableCreator : DBConnector {
    public:
        void createDatabaseTables();
    };

} // database

#endif //API_CODE_TABLECREATOR_H
