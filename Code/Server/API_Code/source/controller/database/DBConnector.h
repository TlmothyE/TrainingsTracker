//
// Created by jeremias on 10.05.22.
//

#ifndef API_CODE_DB_CONNECTOR_H
#define API_CODE_DB_CONNECTOR_H

#include <pqxx/pqxx>

namespace controller::database {

    class DBConnector {
    public:
        DBConnector();

        ~DBConnector();

    protected:
        pqxx::connection *C;
    };

}

#endif //API_CODE_DB_CONNECTOR_H
