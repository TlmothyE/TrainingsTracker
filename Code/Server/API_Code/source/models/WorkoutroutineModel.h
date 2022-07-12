/*
created by Timothy
The class holds the data of a specific workoutroutine
*/
#pragma once

#include <ctime>
#include <utility>
#include <vector>
#include <tuple>
#include <iostream>


class WorkoutroutineModel {

public:

    int workoutroutineID;
    int userID;
    std::string date;
    std::vector<int> exerciseIDs;
    std::vector<std::string> exerciseNames;
    std::vector<int> targetReps;
    std::vector<int> targetSets;
    std::vector<int> targetWeights;


    WorkoutroutineModel() = default;
};
