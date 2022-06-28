/*

created by Timothy

*/

#include "WorkoutroutineDBController.h"

using namespace pqxx;
using namespace std;
using namespace controller::database;

void WorkoutroutineDBController::addWorkoutroutine(const WorkoutroutineModel &wkmodel) {

    std::string sql;

    sql = "INSERT INTO workoutroutines(workoutroutineID, Date)" \
      "VALUES(" + to_string(wkmodel.workoutroutineID) + ", '" + wkmodel.date + "'); " \
            "INSERT INTO exercise_workoutroutines(workoutroutineID, exerciseID, targetReps, targetSets, targetWeight, targetTime) VALUES (" \
 + to_string(wkmodel.workoutroutineID) + " , " + to_string(wkmodel.exerciseIDs) + ", " + to_string(wkmodel.targetReps) +
          "," \
 + to_string(wkmodel.targetSets) + ", " + to_string(wkmodel.targetWeight) + "," + to_string(wkmodel.targetTime) + "=;";

    work W(*C);

    W.exec(sql);
    W.commit();
}


WorkoutroutineModel WorkoutroutineDBController::getWorkoutroutineByID(int wID) {

    return {};

    /*std::string sql;

// connection

    sql = "Select * FROM workoutroutines WHERE ID = " + to_string(tID) + " ; ";

    nontransaction N(*C);

    result R(N.exec(sql));

    int *MubID;
    std::string date;

    for (result::const_iterator c = R.begin(); c != R.end(); c++) {

        date = c[1].as<string>();
        *MubID = c[2].as<int>();
        MubID++;
    }

    // TrainingsplanModel tpmodel(tID, date, MubID);

    return {};*/
}


void WorkoutroutineDBController::removeWorkoutroutine(const WorkoutroutineModel &workoutroutinemodel) {
    // TODO
}