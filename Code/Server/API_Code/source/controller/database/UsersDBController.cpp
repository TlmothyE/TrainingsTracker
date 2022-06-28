//
// Created by jeremias on 10.05.22.
// gets connection from parent and will implement SQL functionality


#include "UsersDBController.h"

//using namespace pqxx;
using namespace controller::database;


UsersDBController::UsersDBController() = default;


/*result UsersDBController::selectUsers(){
    
            std::string sql = "SELECT * from users";;
            
            pqxx::work W{*C};
            // Perform a query and retrieve all results.
            pqxx::result R{W.exec(sql)};

return R;
}*/


void UsersDBController::updateUsers(std::string sql){

      pqxx::work W(*C);

      W.exec(sql);
      W.commit();
          

}

int UsersDBController::createUser(std::string username, std::string password) {
    // TODO write user to database
    pqxx::work W(*C);

    try {
        W.exec("INSERT INTO users (name,password ) VALUES (\'" + username + "\' , \'" + password + "\');");
        int userId = W.query_value<int>("SELECT userid FROM Users WHERE name =\'" + username + "\';");
        W.commit();
        return userId;
    }
    catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }
}

void UsersDBController::updateUserPw(int userId, std::string newPassword) {
    // TODO write user to database
    pqxx::work W(*C);

    W.exec("UPDATE users SET password = \'" + newPassword + "\' WHERE userid = " + std::to_string(userId) + ";");
    W.commit();


}

void UsersDBController::getUser(models::UserModel& user) {

    std::string sql = "SELECT * FROM users WHERE userid=" + to_string(user.userId) + ';';

    pqxx::work W{*C};
    // Perform a query and retrieve all results.
    //models::UserModel user;

    pqxx::result R{W.exec(sql)};

    if (R.empty()) throw std::invalid_argument("UserNotFound");

    for (auto row: R) {
        user.userId = std::stoi(row[0].c_str());
        user.age = row[1].c_str();
        user.userName = row[2].c_str();
        user.weight = row[3].c_str();
        user.height = row[4].c_str();
        user.calfCir = row[5].c_str();;
        user.hipCir = row[6].c_str();
        user.tightCir = row[7].c_str();
            user.chestCir = row[8].c_str();
            user.upperArmCir = row[9].c_str();
            user.bmi = row[10].c_str();
        }
}

int UsersDBController::authUser(std::string username, std::string pw) {

    pqxx::work W(*C);

    try {
        std::string temppw = W.query_value<std::string>("SELECT password FROM Users WHERE name ='" + username + "\'");

        if (pw == temppw) {
            int userId = W.query_value<int>("SELECT userid FROM Users WHERE name ='" + username + "\';");
            W.commit();
            return userId;
        } else {
            return 0;
        }

    }
    catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }

}
