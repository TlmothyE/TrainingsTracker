//
// Created by jeremias on 29.04.22.
//

#pragma once

#include "APIBasicController.h"
#include <pqxx/pqxx>
#include <string>
#include <sstream>
#include "../database/UsersDBController.h"
#include "../../models/UserModel.h"
#include "RequestController.h"
#include "../../utils/Authentication.h"

namespace controller::request {

    class UsersRequestController : APIBasicController {

        /// Handles all GET-requests at the [api-url]/users endpoint
        void handleGET(http_request message) override;

        /// Handles all PUT-requests at the [api-url]/users endpoint
        void handlePUT(http_request message, json::value body) override;

        /// Handles all POST-requests at the [api-url]/users endpoint
        void handlePOST(http_request message, json::value body) override;

        /// Handles all DELETE-requests at the [api-url]/users endpoint
        void handleDELETE(http_request message) override;

    public:
        UsersRequestController(const http_request &message, const method &method) { handleRequest(message, method); };
    };

} // controller
