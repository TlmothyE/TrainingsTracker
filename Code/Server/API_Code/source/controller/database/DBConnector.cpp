//
// Created by jeremias on 10.05.22.
//

#include <iostream>
#include "DBConnector.h"

using namespace controller::database;

DBConnector::DBConnector() {

    // get pointer to environment variable
    const char *dbname_char = getenv("DBNAME");
    const char *dbuser_char = getenv("DBUSER");
    const char *dbpassword_char = getenv("DBPASSWORD");
    const char *dbaddress_char = getenv("DBADDRESS");
    const char *dbport_char = getenv("DBPORT");



    // if environment var is not set char pointer is null
    std::string dbname = (dbname_char ? dbname_char : "");
    std::string dbuser = (dbuser_char ? dbuser_char : "");
    std::string dbpassword = (dbpassword_char ? dbpassword_char : "");
    std::string dbaddress = (dbaddress_char ? dbaddress_char : "");
    std::string dbport = (dbport_char ? dbport_char : "");

    if (dbname.empty() || dbuser.empty() || dbpassword.empty() || dbaddress.empty() || dbport.empty()) {
        std::cerr << "[ERROR] Needed environment variables for database are not set, needed:\n\tDBNAME\n\tDBUSER"
                     "\n\tDBPASSWORD\n\tDBADDRESS\n\tDBPORT" << std::endl;
        exit(EXIT_FAILURE);
    }


    C = new pqxx::connection("dbname = " + dbname + " user = " + dbuser + " password = "
                             + dbpassword + " hostaddr = " + dbaddress + " port = " + dbport);
}

DBConnector::~DBConnector() {
    C->close();
    delete (C);
}

