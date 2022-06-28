//
// Created by Timothy
// This class manages the communicatoin between the UI and our API regarding the exercises

#ifndef API_CODE_EXERCISEREQUESTCONTROLLER_H
#define API_CODE_EXERCISEREQUESTCONTROLLER_H

#include "APIBasicController.h"
#include "../database/ExerciseDBController.h"
#include "../../models/ExerciseModel.h"

namespace controller::request {

    class ExerciseRequestController : APIBasicController{

        void handleGET(http_request message) override;

        void handlePUT(http_request message, json::value body) override;

        void handlePOST(http_request message, json::value body) override;

        void handleDELETE(http_request message) override;

    public:
        ExerciseRequestController(const http_request &message, const method &method) {
            handleRequest(message, method);
        }
    };

} // controller::request

#endif //API_CODE_EXERCISEREQUESTCONTROLLER_H
