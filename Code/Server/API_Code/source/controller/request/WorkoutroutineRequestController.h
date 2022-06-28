/*
created by Timohty

This file is for handeling the interaction between our API and the Client on the TrainingsplanDBController
*/

#ifndef API_CODE_WORKOUTROUTINEREQUESTCONTROLLER_H
#define API_CODE_WORKOUTROUTINEREQUESTCONTROLLER_H


#include "APIBasicController.h"
#include "../../models/WorkoutroutineModel.h"
#include "../database/WorkoutroutineDBController.h"

namespace controller::request {

    class WorkoutroutineRequestController : APIBasicController {

        void handleGET(http_request message) override;

        void handlePUT(http_request message, json::value body) override;

        void handlePOST(http_request message, json::value body) override;

        void handleDELETE(http_request message) override;

    public:
        WorkoutroutineRequestController(const http_request &message, const method &method) {
            handleRequest(message, method);
        }
    };
}


#endif