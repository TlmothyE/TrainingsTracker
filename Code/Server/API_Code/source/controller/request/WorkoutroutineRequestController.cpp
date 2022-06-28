/*
created by Timothy
*/

#include "WorkoutroutineRequestController.h"


namespace controller::request {

    void WorkoutroutineRequestController::handleGET(http_request message) {
        auto params = getUriParams(message);

        std::string workoutroutineID_string;
        int workoutroutineID;

        // check for id in url parameters
        for (std::array<std::string, 2> param: params) {
            if (param[0] == "workoutroutineID") {
                workoutroutineID_string = param[1];
                continue;
            }
        }

        // check if id field is empty, if empty return with bad request
        if (workoutroutineID_string.empty()) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to convert id-field to integer, if fails return with bad request
        try {
            workoutroutineID = std::stoi(workoutroutineID_string);
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to get model from database, if not found return with NotFound
        WorkoutroutineModel workoutroutinemodel;
        try {
            workoutroutinemodel = controller::database::WorkoutroutineDBController().getWorkoutroutineByID(
                    workoutroutineID);
        } catch (...) {
            message.reply(status_codes::NotFound);
            return;
        }

        // convert uebungIds list of integers to list of json::value integers needed to create array for response
        auto uebungIdsJsonValue = std::vector<json::value>();
        for (int &item: workoutroutinemodel.exerciseIDs) {
            uebungIdsJsonValue.emplace_back(item);
        }

        // create response body and respond with OK status code
        auto response = json::value::object();
        response["workoutroutineID"] = workoutroutinemodel.workoutroutineID;
        response["date"] = json::value::string(workoutroutinemodel.date);
        response["uebungIds"] = json::value::array(uebungIdsJsonValue);

        message.reply(status_codes::OK, response);
    }


    void WorkoutroutineRequestController::handlePUT(http_request message, json::value body) {
        // TODO implement alter TrainingsplanDBController
        message.reply(status_codes::NotImplemented);
    }

    void WorkoutroutineRequestController::handlePOST(http_request message, json::value body) {

        auto workoutroutinemodel = WorkoutroutineModel();

        // convert json-body to TrainingsplanModel, if fails reply with BadRequest
        try {
            workoutroutinemodel.workoutroutineID = body["workoutroutineID"].as_integer();
            workoutroutinemodel.date = body["date"].as_string();

            for (auto &uebungsId: body["uebungsIds"].as_array()) {
                workoutroutinemodel.exerciseIDs.emplace_back(uebungsId.as_integer());
            }
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }

        try {
            controller::database::WorkoutroutineDBController().addWorkoutroutine(workoutroutinemodel);
        } catch (std::invalid_argument &e) {
            if (strcmp(e.what(), "already same id") != 0) {
                message.reply(status_codes::Conflict);
                return;
            }
        }

        message.reply(status_codes::Created);


    }

    void WorkoutroutineRequestController::handleDELETE(http_request message) {
        // TODO implement delete TrainingsplanDBController
        message.reply(status_codes::NotImplemented);
    }
}