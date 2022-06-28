/*
created by Timothy

this class writes and gets date from Products
*/

#ifndef API_CODE_USERSDBCONTROLLER_H
#define API_CODE_USERSDBCONTROLLER_H
#pragma once

#include "../../models/ProductModel.h"
#include "DBConnector.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <tuple>
#include <string>
#include <pqxx/pqxx>

namespace controller::database {

    class ProductDBController : DBConnector {

// inherits connection from db controller;
    public:

        void addProduct(const models::ProductModel &p);

        models::ProductModel getProductByID(int ProdcutID);
    };

}

#endif //API_CODE_USERSDBCONTROLLER_H