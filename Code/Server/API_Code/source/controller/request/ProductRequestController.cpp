/*
* created by Timothy
*/

#include "ProductRequestController.h"

namespace controller::request {

    void ProductRequestController::handleGET(http_request message) {

        auto params = getUriParams(message);

        std::string productID_string;
        int productID;

        // check for id in url parameters
        for (std::array<std::string, 2> param: params) {
            if (param[0] == "productID") {
                productID_string = param[1];
                continue;
            }
        }

        // check if id field is empty, if empty return with bad request
        if (productID_string.empty()) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to convert id-field to integer, if fails return with bad request
        try {
            productID = std::stoi(productID_string);
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to get model from database, if not found return with NotFound
        models::ProductModel productmodel;
        try {
            productmodel = controller::database::ProductDBController().getProductByID(productID);
        } catch (...) {
            message.reply(status_codes::NotFound);
            return;
        }

        // create response body and respond with OK status code
        auto response = json::value::object();
        response["prodcutID"] = productmodel.productID;
        response["productName"] = json::value::string(productmodel.productName);
        response["caloriesPer100g"] = productmodel.caloriesPer100g;

        message.reply(status_codes::OK, response);
    }


    void ProductRequestController::handlePUT(http_request message, json::value body) {
        message.reply(status_codes::NotImplemented);
    }

    void ProductRequestController::handlePOST(http_request message, json::value body) {

        auto productmodel = models::ProductModel();

        // convert json-body to productmodel, if fails reply with BadRequest
        try {
            productmodel.productID = body["productID"].as_integer();
            productmodel.productName = body["productName"].as_string();
            productmodel.caloriesPer100g = body["caloriesPer100g"].as_integer();

        }
        catch (...) {
            message.
                    reply(status_codes::BadRequest);
            return;
        }

        try {
            controller::database::ProductDBController().addProduct(productmodel);
        } catch (std::invalid_argument &e) {
            if (strcmp(e.what(), "already same id") != 0) {
                message.reply(status_codes::Conflict);
                return;
            }

        }

        message.reply(status_codes::Created);
    }

    void ProductRequestController::handleDELETE(http_request message) {
        message.reply(status_codes::NotImplemented);
    }

}