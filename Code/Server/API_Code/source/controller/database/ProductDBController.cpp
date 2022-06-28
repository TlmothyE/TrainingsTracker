/*
 *created by Timothy
 */

#include "ProductDBController.h"

using namespace pqxx;
using namespace std;
using namespace controller::database;

void ProductDBController::addProduct(const models::ProductModel &p) {

    std::string sql;

    sql = "INSERT INTO Product" \
        "Values(" + to_string(p.productID) + "," + p.productName + "," + to_string(p.caloriesPer100g) + ");";

    pqxx::work W(*C);

    W.exec(sql);
    W.commit();
}

models::ProductModel ProductDBController::getProductByID(int ProductID) {

    std::string sql;

    sql = "SELECT * " \
          "FROM Product " \
          "WHERE ProductID = " + to_string(ProductID) + ";";

    pqxx::work W(*C);
    W.exec(sql);
    W.commit();

    // TODO create Product Model from database response
    return models::ProductModel{};
}