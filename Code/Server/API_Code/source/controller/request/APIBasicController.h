//
// Created by jeremias on 29.04.22.
//

#ifndef API_CODE_APIBASICCONTROLLER_H
#define API_CODE_APIBASICCONTROLLER_H

#include <cpprest/http_listener.h>

using namespace web;
using namespace http;

namespace controller::request {

    class APIBasicController {
    public:
        virtual void handleGET(http_request message) = 0;

        virtual void handlePUT(http_request message, json::value body) = 0;

        virtual void handlePOST(http_request message, json::value body) = 0;

        virtual void handleDELETE(http_request message) = 0;

        /// handle request and call fitting virtual method
        /// for POST and PUT request extracts json from body passes it to the
        /// underlying method
        /// \param message http_request object to be passed to the reply method
        void handleRequest(const http_request &message, const method &method);

        /// Method to get uri parameters as vector from message object
        /// \param message http_request object which is used to extract parameters
        /// \return a nested vector, top level vector is for every (key, value) combination, sublevel vector is at first
        /// place the key and at second place the value
        static std::vector<std::array<std::string, 2>> getUriParams(const http_request &message);

        /// Helper-method to print params from getUriParams to console
        /// \param params output from getUriParams()
        [[maybe_unused]] static void printParams(const std::vector<std::array<std::string, 2>> &params);

        /// Helper-method to create error response json
        /// \param errorMessage error message for response
        static json::value createErrorJson(const std::string &errorMessage);
    };

} // controller

#endif //API_CODE_APIBASICCONTROLLER_H
