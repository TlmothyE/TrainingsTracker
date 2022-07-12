/*
created by Timohty

This class Handles the communcation between the user and the API to add and get products
*/

#ifndef API_CODE_PRODUCTREQUESTCONTROLLER_H
#define API_CODE_PRODUCTREQUESTCONTROLLER_H

#include "APIBasicController.h"
#include "../../models/ProductModel.h"
#include "../database/ProductDBController.h"

namespace controller::request {

    class ProductRequestController : APIBasicController {

        void handleGET(http_request message) override;

        void handlePUT(http_request message, json::value body) override;

        void handlePOST(http_request message, json::value body) override;

        void handleDELETE(http_request message) override;

    public:
        ProductRequestController(const http_request &message, const method &method) {
            handleRequest(message, method);
        }
    };
}

#endif //API_CODE_PRODUCTREQUESTCONTROLLER_H