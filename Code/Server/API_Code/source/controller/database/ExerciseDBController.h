//
// Created by Timothy
// This class manages the saving of the information from exercises

#ifndef API_CODE_EXERCISEDBCONTROLLER_H
#define API_CODE_EXERCISEDBCONTROLLER_H

#include "DBConnector.h"
#include "../../models/ExerciseModel.h"
#include <pqxx/pqxx>


namespace controller::database {

    class ExerciseDBController : DBConnector {

    public:

        void addExercise(models::ExerciseModel &emodel);

        models::ExerciseModel getExerciseByID(models::ExerciseModel &emodel);


};

}//namespace

#endif //API_CODE_EXERCISEDBCONTROLLER_H