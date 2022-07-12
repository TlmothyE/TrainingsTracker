//
// Created by Timothy
// This file is the format in which our Exercises are gonna be safed

#ifndef API_CODE_EXERCISE_H
#define API_CODE_EXERCISE_H

#include <string>


namespace models{

    class ExerciseModel {

    public:

        ExerciseModel() = default;

        int exerciseID;
        std::string name;
        int userID;

    };

}




#endif //API_CODE_EXERCISE_H
