//
// Created by jeremias on 26.04.22.
//

#ifndef API_CODE_REQUESTCONTROLLER_H
#define API_CODE_REQUESTCONTROLLER_H

#include "basic_controller.hpp"
#include "Controllers.h"

using namespace cfx;

namespace controller::request {
    class RequestController : public cfx::BasicController, Controller {
    public:
        RequestController() : cfx::BasicController() {}

        ~RequestController() = default;

        /// Method that gets called everytime a GET-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleGet(http_request message) override;

        /// Method that gets called everytime a PUT-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handlePut(http_request message) override;

        /// Method that gets called everytime a POST-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handlePost(http_request message) override;

        /// Method that gets called everytime a DELETE-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleDelete(http_request message) override;

        /// Method that gets called everytime a PATH-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handlePatch(http_request message) override;

        /// Method that gets called everytime a HEAD-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleHead(http_request message) override;

        /// Method that gets called everytime a OPTIONS-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleOptions(http_request message) override;

        /// Method that gets called everytime a TRACE-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleTrace(http_request message) override;

        /// Method that gets called everytime a CONNECT-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleConnect(http_request message) override;

        /// Method that gets called everytime a MERGE-Request is performed to our API-Endpoint
        /// \param message http_request object that holds all information about the request and is able to perform a reply
        void handleMerge(http_request message) override;

        /// initializes the reply methods to the server
        void initRestOpHandlers() override;

        static json::value responseNotImpl(const http::method &method);

        static void handleRequest(const http_request &, const http::method &);
    };
}


#endif //API_CODE_REQUESTCONTROLLER_H
