//
// Created by Kilian on 15.04.22.
// This class will get a http message from the RequestController and handle the user requests
//

#include "UsersRequestController.h"

namespace controller::request {

    void UsersRequestController::handleGET(http_request message) {

        auto params = getUriParams(message);

        std::string authHeader;

        for (const auto &headerField: message.headers()) {
            if (headerField.first == "Authorization") {
                authHeader = headerField.second;
            }
        }

        std::string userId_string;
        int userId;

        // check for id in url params
        for (std::array<std::string, 2> param: params) {
            if (param[0] == "userId") {
                userId_string = param[1];
                continue;
            }
        }

        // check if id field is empty, if empty return with bad request
        if (userId_string.empty()) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to convert id-field to integer, if fails return with bad request
        try {
            userId = std::stoi(userId_string);
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }

        if (!Authentication::tokenValidForUserId(authHeader, userId)) {
            message.reply(status_codes::Forbidden, createErrorJson("Wrong auth token for userId"));
            return;
        }

        models::UserModel user;
        user.userId = userId;
        controller::database::UsersDBController DBController;

        try {
            DBController.getUser(user);
        } catch (...) {
            message.reply(status_codes::NotFound);
            return;
        }

        // build json from user-model
        auto response = json::value::object();
        response["userId"] = user.userId;
        response["age"] = json::value::string(user.age);
        response["userName"] = json::value::string(user.userName);
        response["weight"] = json::value::string(user.weight);
        response["height"] = json::value::string(user.height);
        response["calfCir"] = json::value::string(user.calfCir);
        response["hipCir"] = json::value::string(user.hipCir);
        response["tightCir"] = json::value::string(user.tightCir);
        response["chestCir"] = json::value::string(user.chestCir);
        response["upperArmCir"] = json::value::string(user.upperArmCir);
        response["bmi"] = json::value::string(user.bmi);

        message.reply(status_codes::OK, response);
    }


    void UsersRequestController::handlePUT(http_request message, json::value body) {

        auto params = getUriParams(message);
        //printParams(params);
        int userId = body["userId"].as_integer();

        //building sql string
        std::ostringstream oss;
        oss << "UPDATE users Set age = " << body["age"].as_integer() << ", " << "name = " << "\'"
            << body["userName"].as_string() << "\'" << ", " << "weight = " << body["weight"].as_double() << ", "
            << "height = " << body["height"].as_double() << ", " << "calfcir = " << body["calfCir"].as_double() << ", "
            << "hipcir = " << body["hipCir"].as_double() << ", " << "thightCir = "
            << body["tightCir"].as_double() << ", "
            << "chestcir = " << body["chestCir"].as_double() << ", " << "upperarmcir = "
            << body["upperArmCir"].as_double() << " WHERE userId =" << userId << ";";

        std::string sql = oss.str();

        //sending sql string to UsersDBController
        controller::database::UsersDBController user;
        user.updateUsers(sql);

        //std::cout << "put request to users";

        message.reply(status_codes::OK, body);
    }

    void UsersRequestController::handlePOST(http_request message, json::value body) {
        //TODO implement handlePOST for users
        message.reply(status_codes::NotImplemented, RequestController::responseNotImpl(message.method()));
    }

    void UsersRequestController::handleDELETE(http_request message) {
        //TODO implement handleDELETE for users
        //message.reply(status_codes::NotImplemented, RequestController::responseNotImpl(message.method()));
    }
/*
    void UsersRequestController::handlePOST(http_request message, json::value body) {
        message.reply(status_codes::NotImplemented);
    }

    void UsersRequestController::handleDELETE(http_request message) {
        message.reply(status_codes::NotImplemented);
    }*/


} // controller
