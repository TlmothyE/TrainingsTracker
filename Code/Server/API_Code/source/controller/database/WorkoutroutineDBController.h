/*
created by Timothy


This File is the Database of the TrainingsplanDBController.
IT saves the Date and ID of the TrainingsplanDBController. The Exercises will be Saved in their own database
and via a relation, the TrainingsplanDBController and Exercises will be added together
*/

#pragma once

#include "../../models/WorkoutroutineModel.h"
#include "DBConnector.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <tuple>
#include <pqxx/pqxx>

namespace controller::database {

    class WorkoutroutineDBController : DBConnector {

// inherits connection from db controller;
    public:

        //add TrainingsplanID and Date of the Plan
        void addWorkoutroutine(const WorkoutroutineModel &workoutroutinemodel);

        WorkoutroutineModel getWorkoutroutineByID(WorkoutroutineModel &wmodel);

        void removeWorkoutroutine(const WorkoutroutineModel &workoutroutinemodel);
    };

}