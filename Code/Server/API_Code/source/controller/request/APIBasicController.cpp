//
// Created by jeremias on 29.04.22.
//

#include "APIBasicController.h"

#include <utility>
#include <cstring>
#include <iostream>

namespace controller::request {
    void APIBasicController::handleRequest(const http_request &message, const method &request_method) {
        if (request_method == methods::GET) {
            handleGET(message);
        } else if (request_method == methods::PUT) {
            // extract json and call handlePUT with json data as parameter
            try {
                auto body = message.extract_json(true).get();
                handlePUT(message, std::move(body));
            } catch (const std::exception &e) {
                std::cout << "Caught exception: \n" << e.what() << std::endl;
                message.reply(status_codes::BadRequest);
                return;
            }
        } else if (request_method == methods::POST) {
            // extract json and call handlePOST with json data as parameter
            try {
                auto body = message.extract_json(true).get();
                handlePOST(message, std::move(body));
            } catch (...) {
                message.reply(status_codes::BadRequest);
                return;
            }
        } else if (request_method == methods::DEL) {
            handleDELETE(message);
        } else {
            // Should be impossible case, but best practice
            message.reply(http::status_codes::NotImplemented);
        }
    }


    std::vector<std::array<std::string, 2>> APIBasicController::getUriParams(const http_request &message) {
        auto query = message.relative_uri().query();
        char *ptr = strtok(query.data(), "&");
        // create vector with one entry for each parameter like username=Max1995
        auto paramVec = std::vector<std::string>();
        while (ptr != nullptr) {
            paramVec.emplace_back(ptr);
            ptr = strtok(nullptr, "&");
        }
        // create vector with vectors each with one part of parameter like cleanedParamVec[0][0] = username and cleanedParamVec[0][1] = Max1995
        auto cleanedParamVec = std::vector<std::array<std::string, 2>>();
        std::for_each(paramVec.begin(), paramVec.end(), [&](std::string &item) {
            auto addVec = std::vector<std::string>();
            char *ptr = strtok(item.data(), "=");
            while (ptr != nullptr) {
                addVec.emplace_back(ptr);
                ptr = strtok(nullptr, "=");
            }
            if (addVec.size() != 2) return;
            std::array<std::string, 2> addArray;
            addArray[0] = addVec.at(0);
            addArray[1] = addVec.at(1);
            cleanedParamVec.emplace_back(addArray);
        });

        return cleanedParamVec;
    }

    [[maybe_unused]] void APIBasicController::printParams(const std::vector<std::array<std::string, 2>> &params) {
        if (!params.empty()) {
            std::cout << "Params: " << std::endl;
            // iterate over parameters and print them to standard output
            std::for_each(params.begin(), params.end(), [&](const std::array<std::string, 2> &item) {
                std::cout << "\t Param: ";
                std::for_each(item.begin(), item.end(), [&](const std::string &item) {
                    std::cout << item << "\t";
                });
                std::cout << std::endl;
            });
        } else {
            std::cout << "Empty parameter list" << std::endl;
        }
    }

    json::value APIBasicController::createErrorJson(const std::string &errorMessage) {
        auto errorResponse = json::value::object();
        errorResponse["error"] = json::value::string(errorMessage);
        return errorResponse;
    }


} // controller