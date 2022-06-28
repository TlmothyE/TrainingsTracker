//
// Created by jeremias on 30.05.22.
//

#include "AuthenticationRequestController.h"
#include "../database/UsersDBController.h"

namespace controller::request {
    void AuthenticationRequestController::handleGET(http_request message) {
        auto params = getUriParams(message);
        std::string username;
        std::string password;


        for (const auto &item: params) {
            if (item[0] == "username") username = item[1];
            if (item[0] == "password") password = Authentication::hashPassword(item[1]);
        }


        if (username.empty() || password.empty()) {

            message.reply(status_codes::BadRequest,
                          createErrorJson("Need to provide username (str) and password (str) as uri parameters"));
            return;
        }


        database::UsersDBController UserDBController;
        int tmpUserId = UserDBController.authUser(username, password);

        if (tmpUserId != 0) {


            auto token = Authentication::createTokenForUserId(tmpUserId);
            auto correctResponse = json::value::object();
            correctResponse["userId"] = json::value::string(std::to_string(tmpUserId));
            correctResponse["token"] = json::value::string(token);
            message.reply(status_codes::OK, correctResponse);
            return;
        } else {
            message.reply(status_codes::Forbidden, createErrorJson("Wrong username (str) or password (str)"));
            return;
        }
    }


    void AuthenticationRequestController::handlePUT(http_request message, json::value body) {

        if (!body["username"].is_string() || !body["password"].is_string() || !body["new_password"].is_string()) {
            message.reply(status_codes::BadRequest,
                          createErrorJson("userId (str), password (str) or new_password (str) missing in body"));
            return;
        }

        std::string username = body["username"].as_string();
        std::string password = Authentication::hashPassword(body["password"].as_string());
        std::string new_password = Authentication::hashPassword(body["new_password"].as_string());
        database::UsersDBController UserDBController;
        int userId = UserDBController.authUser(username, password);

        if (userId != 0) {

            UserDBController.updateUserPw(userId, new_password);
            return;
        } else {

            message.reply(status_codes::Forbidden, createErrorJson("wrong username (str) or password (str)"));
            return;
        }

        // message.reply(status_codes::InternalError);
    }

    void AuthenticationRequestController::handlePOST(http_request message, json::value body) {
        if (!body["username"].is_string() || !body["password"].is_string()) {
            message.reply(status_codes::BadRequest,
                          createErrorJson("username (str) or password (str) missing in body"));
            return;
        }

        std::string username = body["username"].as_string();
        std::string password = Authentication::hashPassword(body["password"].as_string());
        database::UsersDBController UserDBController;
        int userId = UserDBController.createUser(username, password);

        if (userId != 0) {

            auto returnJson = json::value::object();
            returnJson["userId"] = userId;
            returnJson["token"] = json::value::string(Authentication::createTokenForUserId(userId));
            message.reply(status_codes::OK, returnJson);

            return;
        } else {


            message.reply(status_codes::Conflict, createErrorJson("username (str) already exists"));
        }

    }

    void AuthenticationRequestController::handleDELETE(http_request message) {
        message.reply(status_codes::NotImplemented);
    }
} // request
