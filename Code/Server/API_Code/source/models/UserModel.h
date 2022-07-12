//
// Created by jeremias on 17.05.22.
//

#ifndef API_CODE_USERMODEL_H
#define API_CODE_USERMODEL_H

#include "string"

using namespace std;

namespace models {
    class UserModel {
    public:
        int userId;
        string age;
        string userName;
        string weight;
        string height;
        string calfCir;
        string hipCir;
        string tightCir;
        string chestCir;
        string upperArmCir;
        string bmi;
    };
}

#endif //API_CODE_USERMODEL_H
