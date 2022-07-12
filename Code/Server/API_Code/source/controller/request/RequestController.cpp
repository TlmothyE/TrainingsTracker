//
// Created by jeremias on 26.04.22.
//

#include "RequestController.h"

using namespace web;
using namespace http;
using namespace controller::request;

void RequestController::initRestOpHandlers() {
    _listener.support(methods::GET, [this](auto &&PH1) { handleGet(std::forward<decltype(PH1)>(PH1)); });
    _listener.support(methods::PUT, [this](auto &&PH1) { handlePut(std::forward<decltype(PH1)>(PH1)); });
    _listener.support(methods::POST, [this](auto &&PH1) { handlePost(std::forward<decltype(PH1)>(PH1)); });
    _listener.support(methods::DEL, [this](auto &&PH1) { handleDelete(std::forward<decltype(PH1)>(PH1)); });
}


void RequestController::handleGet(http_request message) {
    // Getting the request-path from the message object as vector array
    auto path = requestPath(message);
    // if request-path is empty reply with NotFound status code
    if (!path.empty() && path.size() == 2) {
        // reply to test endpoint with version and status
        if (path[0] == "service" && path[1] == "test") {
            auto response = json::value::object();
            response["version"] = json::value::string("v.0.0.1");
            response["status"] = json::value::string("ready!");
            message.reply(status_codes::OK, response);
            return;
        }
    }
    handleRequest(message, message.method());
}

void RequestController::handlePut(http_request message) {
    handleRequest(message, message.method());
}

void RequestController::handlePost(http_request message) {
    handleRequest(message, message.method());
}

void RequestController::handleDelete(http_request message) {
    handleRequest(message, message.method());
}

// Method to respond if NotImplemented
json::value RequestController::responseNotImpl(const http::method &method) {
    auto response = json::value::object();
    response["serviceName"] = json::value::string("C++ Trainingstracker API");
    response["http_method"] = json::value::string(method);
    return response;
}

// Unneeded methods
// Only respond with NotImplemented

void RequestController::handlePatch(http_request message) {
    message.reply(status_codes::NotImplemented, responseNotImpl(methods::PATCH));
}

void RequestController::handleHead(http_request message) {
    message.reply(status_codes::NotImplemented, responseNotImpl(methods::HEAD));
}

void RequestController::handleOptions(http_request message) {
    message.reply(status_codes::NotImplemented, responseNotImpl(methods::OPTIONS));
}

void RequestController::handleTrace(http_request message) {
    message.reply(status_codes::NotImplemented, responseNotImpl(methods::TRCE));
}

void RequestController::handleConnect(http_request message) {
    message.reply(status_codes::NotImplemented, responseNotImpl(methods::CONNECT));
}

void RequestController::handleMerge(http_request message) {
    message.reply(status_codes::NotImplemented, responseNotImpl(methods::MERGE));
}

//decides what controller must be called
void RequestController::handleRequest(const http_request &message, const method &method) {
    auto fullPath = requestPath(message);
    if (fullPath.empty()) {
        message.reply(status_codes::NotFound);
        return;
    }
    try {
        auto path = fullPath[0];
        if (path == "users") {
            UsersRequestController(message, method);
        } else if (path == "workoutroutine") {
            WorkoutroutineRequestController(message, method);
        } else if (path == "product") {
            ProductRequestController(message, method);
        } else if (path == "auth") {
            AuthenticationRequestController(message, method);
        } else if (path == "exercise"){
            ExerciseRequestController(message, method);
        }

        else {
            message.reply(status_codes::NotFound);
        }

        //TODO implement other endpoints
    } catch (std::exception &e) {
        message.reply(status_codes::InternalError);
    }
}
