/*

created by Timothy

*/

#include "WorkoutroutineDBController.h"

using namespace pqxx;
using namespace std;
using namespace controller::database;

void WorkoutroutineDBController::addWorkoutroutine(const WorkoutroutineModel &wkmodel) {
    work W(*C);
    nontransaction N(*C);

    std::string sql = "INSERT INTO workoutroutines (\"userID\") VALUES (" + to_string(wkmodel.userID) +
                      ") RETURNING \"workoutroutineID\";";
    result R(N.exec(sql));

    for (const auto &single_result: R) {
        cout << "Single Result:" << endl;
        for (const auto &single_result_item: single_result) {
            cout << "\t" << single_result_item << endl;
        }
    }
    return;
    int workoutroutineID = 1234;
    for (const auto &item: wkmodel.exerciseIDs) {
        sql = R"(Insert into workoutroutines_exercise ("workoutroutineID", "exerciseID") VALUES ()" +
              to_string(workoutroutineID) + ", " +
              to_string(item) + ");";
        W.exec(sql);
    }
    W.commit();
}


WorkoutroutineModel WorkoutroutineDBController::getWorkoutroutineByID(WorkoutroutineModel &wmodel) {

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