//
// Created by jeremias on 30.05.22.
//

#ifndef API_CODE_AUTHENTICATIONREQUESTCONTROLLER_H
#define API_CODE_AUTHENTICATIONREQUESTCONTROLLER_H

#include "APIBasicController.h"
#include "../../utils/Authentication.h"

namespace controller::request {

    class AuthenticationRequestController : APIBasicController {
        /// Handles all GET-requests at the [api-url]/auth endpoint
        /// used to get users JWT-Token
        void handleGET(http_request message) override;

        /// Handles all PUT-requests at the [api-url]/auth endpoint
        /// Used to update users credentials
        void handlePUT(http_request message, json::value body) override;

        /// Handles all POST-requests at the [api-url]/auth endpoint
        /// Used to create new users
        void handlePOST(http_request message, json::value body) override;

        /// Handles all DELETE-requests at the [api-url]/auth endpoint
        /// Used to delete users
        void handleDELETE(http_request message) override;

    public:
        AuthenticationRequestController(const http_request &message, const method &method) {
            handleRequest(message, method);
        };
    };

} // request

#endif //API_CODE_AUTHENTICATIONREQUESTCONTROLLER_H
