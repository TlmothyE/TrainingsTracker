//
// Created by Timothy
//

#include "ExerciseRequestController.h"

namespace controller::request {

    void ExerciseRequestController::handleGET(http_request message) {
        auto params = getUriParams(message);

        std::string exerciseID_string;
        int exerciseID;


        // check for id in url parameters
        for (std::array<std::string, 2> param: params) {
            if (param[0] == "exerciseID") {
                exerciseID_string = param[1];
                continue;
            }
        }

        // check if id field is empty, if empty return with bad request
        if (exerciseID_string.empty()) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to convert id-field to integer, if fails return with bad request
        try {
            exerciseID = std::stoi(exerciseID_string);
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }

        // try to get model from database, if not found return with NotFound
        models::ExerciseModel exercisemodel;

        try {
          exercisemodel = controller::database::ExerciseDBController().getExerciseByID(exerciseID);

        } catch (...) {
            message.reply(status_codes::NotFound);
            return;
        }
/*
        // convert exerciseIDs list of integers to list of json::value integers needed to create array for response
        auto exerciseIdsJsonValue = std::vector<json::value>();
        for (int &item: exercisemodel.exerciseID) {
            exerciseIdsJsonValue.emplace_back(item);
        }

 */
        // create response body and respond with OK status code
        auto response = json::value::object();
        response["exerciseID"] = exercisemodel.exerciseID;
        response["name"] = json::value::string(exercisemodel.name);
        response["userID"] = exercisemodel.userID;
        response["exerciseType"] = exercisemodel.exerciseTyp;

        message.reply(status_codes::OK, response);

    }

    void ExerciseRequestController::handlePOST(http_request message, json::value body) {

        auto exercisemodel = models::ExerciseModel();

        // convert json-body to Exercisemodel, if fails reply with BadRequest
        try {
            exercisemodel.exerciseID = body["exerciseID"].as_integer();
            exercisemodel.name = body["name"].as_string();
            exercisemodel.userID = body["userId"].as_integer();
            exercisemodel.exerciseTyp= body["exerciseTyp"].as_integer();

/*
            for (auto &exerciseID: body["exerciseID"].as_array()) {
                exercisemodel.exerciseID.emplace_back(uebungsId.as_integer());

            }
            */
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }

        try {
            controller::database::ExerciseDBController().addExercise(exercisemodel);
        } catch (std::invalid_argument &e) {
            if (strcmp(e.what(), "already same id") != 0) {
                message.reply(status_codes::Conflict);
                return;
            }
        }

        message.reply(status_codes::Created);


    }

    void ExerciseRequestController::handleDELETE(http_request message) {

        message.reply(status_codes::NotImplemented);
    }

    void ExerciseRequestController::handlePUT(http_request message, json::value body){

        message.reply(status_codes::NotImplemented);
    }
}// controllers::request