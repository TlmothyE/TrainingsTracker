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
        workoutroutinemodel.workoutroutineID = workoutroutineID;
        controller::database::WorkoutroutineDBController DBController;

        try {
            DBController.getWorkoutroutineByID(workoutroutinemodel);
        } catch (...) {
            message.reply(status_codes::NotFound);
            return;
        }

        // convert ExerciseIDS list of integers to list of json::value integers needed to create array for response
        auto ExerciseIDsJsonValue = std::vector<json::value>();
        for (int &item: workoutroutinemodel.exerciseIDs) {
            ExerciseIDsJsonValue.emplace_back(item);
        }

        //convert ExerciseNames list of Strings to list of json::value
        auto ExerciseNamesJsonValue = std::vector<json::value>();
        for (auto &item: workoutroutinemodel.exerciseNames) {
            ExerciseNamesJsonValue.emplace_back(item);
        }

        //convert TargetSets list of integers to list of json::value
        auto TargetSetsJsonValue = std::vector<json::value>();
        for (int &item : workoutroutinemodel.targetSets) {
            TargetSetsJsonValue.emplace_back(item);
        }

        //convert TargetReps list of integers to list of json::value
        auto TargetRepsJsonValue = std::vector<json::value>();
        for (int &item : workoutroutinemodel.targetReps) {
            TargetRepsJsonValue.emplace_back(item);
        }

        auto TargetWeightsJsonValue = std::vector<json::value>();
        for (int &item: workoutroutinemodel.targetWeights) {
            TargetWeightsJsonValue.emplace_back(item);
        }
        // create response body and respond with OK status code
        auto response = json::value::object();
        response["workoutroutineID"] = workoutroutinemodel.workoutroutineID;
        response["userID"] = workoutroutinemodel.userID;
        response["date"] = json::value::string(workoutroutinemodel.date);
        response["exerciseIDs"] = json::value::array(ExerciseIDsJsonValue);
        response["exerciseNames"] = json::value::array(ExerciseNamesJsonValue);
        response["targetSets"] = json::value::array(TargetSetsJsonValue);
        response["targetReps"] = json::value::array(TargetRepsJsonValue);
        response["targetWeights"] = json::value::array(TargetWeightsJsonValue);
        message.reply(status_codes::OK, response);
    }


    void WorkoutroutineRequestController::handlePUT(http_request message, json::value body) {
        // TODO implement alter TrainingsplanDBController
        message.reply(status_codes::NotImplemented);
    }

    void WorkoutroutineRequestController::handlePOST(http_request message, json::value body) {

        WorkoutroutineModel workoutroutinemodel = WorkoutroutineModel();

        // convert json-body to TrainingsplanModel, if fails reply with BadRequest
        try {
            workoutroutinemodel.workoutroutineID = body["workoutroutineID"].as_integer();
            workoutroutinemodel.userID = body["userID"].as_integer();
            workoutroutinemodel.date = body["date"].as_string();

            for (auto &exerciseID: body["exerciseIDs"].as_array()) {
                workoutroutinemodel.exerciseIDs.emplace_back(exerciseID.as_integer());
            }

            for (auto &exerciseName: body["exerciseNames"].as_array()) {
                workoutroutinemodel.exerciseNames.emplace_back(exerciseName.as_string());
            }

            for (auto &targetSet: body["targetSets"].as_array()){
                workoutroutinemodel.targetSets.emplace_back(targetSet.as_integer());
            }

            for (auto &targetRep: body["targetReps"].as_array()){
                workoutroutinemodel.targetReps.emplace_back(targetRep.as_integer());
            }

            for (auto &targetWeight: body["targetWeights"].as_array()) {
                workoutroutinemodel.targetWeights.emplace_back(targetWeight.as_integer());


            }
        } catch (...) {
            message.reply(status_codes::BadRequest);
            return;
        }


        controller::database::WorkoutroutineDBController DBController;

        try {
            DBController.addWorkoutroutine(workoutroutinemodel);

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