//
// Created by Timothy
//

#include "ExerciseDBController.h"

using namespace pqxx;
using namespace std;
using namespace controller::database;

void ExerciseDBController::addExercise(models::ExerciseModel &emodel){

    string sql;

    sql = "INSERT INTO exercises(exerciseID,userID,name,exerciseType) VALUES(" + to_string(emodel.exerciseID) + ", " + to_string(emodel.userID) + "," +
            emodel.name +  ");";

    work W(*C);

    W.exec(sql);

    W.commit();
}

models::ExerciseModel ExerciseDBController::getExerciseByID(models::ExerciseModel &emodel) {

    string sql;

    sql = "SElECT * FROM exercises WHERE exerciseID = " + to_string(emodel.exerciseID) + ";";

    work W(*C);

    result R(W.exec(sql));

    //if (R.empty()) throw std::invalid_argument("ExerciseNotFound");

    for(auto row : R){
        emodel.exerciseID = std::stoi(row[0].c_str());
        emodel.userID = std::stoi(row[1].c_str());
        emodel.name = row[2].c_str();
    }

    return emodel;
}



