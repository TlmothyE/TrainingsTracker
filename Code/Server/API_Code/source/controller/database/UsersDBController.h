//
// Created by jeremias on 10.05.22.
//

#pragma once

#include <iostream>
#include <pqxx/pqxx>
#include "DBConnector.h"
#include "../../models/UserModel.h"


namespace controller::database {
    class UsersDBController : public DBConnector {

    private:


    public:
        UsersDBController();

        // void updateUsers(std::string sql);

        int createUser(std::string username, std::string password);

        void getUser(models::UserModel& user);

        void updateUsers(std::string sql);

        int authUser(std::string username, std::string pw);

        void updateUserPw(int userId, std::string newPassword);

    };


}
