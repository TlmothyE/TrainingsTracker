//
// Created by Timothy.
//
#ifndef API_CODE_PRODCUTMODEL_H
#define API_CODE_PRODCUTMODEL_H

#include <string>

namespace models {
    class ProductModel {

    public:
        ProductModel() = default;

        int productID{};
        std::string productName;
        int caloriesPer100g{};
    };
}

#endif //API_CODE_PRODCUTMODEL_H
