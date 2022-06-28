//
// Created by Timothy
//

#include "ExerciseDBController.h"

using namespace pqxx;
using namespace std;
using namespace controller::database;

void ExerciseDBController::addExercise(models::ExerciseModel ex){

    string sql;

    sql = "INSERT INTO exercises(exerciseID,userID,name,exerciseType) VALUES(" + to_string(ex.exerciseID) + ", " + to_string(ex.userID) + "," +
            ex.name + "," + to_string(ex.exerciseTyp) + ");";

    work W(*C);

    W.exec(sql);

    W.commit();
}

models::ExerciseModel ExerciseDBController::getExerciseByID(int exID) {

    string sql;

    sql = "SElECT * FROM exercises WHERE exerciseID = " + to_string(exID) + ";";

    work W(*C);

    W.exec(sql);

    W.commit();

    return models::ExerciseModel{}; //TODO create Model from response
}

void ExerciseDBController::deleteExercise(int exID) {

    string sql;

    sql = "DELETE * FROM exercises WHERE exerciseID = " + to_string(exID) + ";";

    work W(*C);

    W.exec(sql);

    W.commit();
}

