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

        void addExercise(models::ExerciseModel ex);

        models::ExerciseModel getExerciseByID(int exID);

        void deleteExercise(int exID);
};

}//namespace

#endif //API_CODE_EXERCISEDBCONTROLLER_H