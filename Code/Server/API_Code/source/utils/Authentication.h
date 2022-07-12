//
// Created by jeremias on 25.05.22.
//

#ifndef API_CODE_AUTHENTICATION_H
#define API_CODE_AUTHENTICATION_H


#include <string>
#include <vector>
#include <array>
#include <openssl/sha.h>
#include <sstream>
#include <iostream>
#include <iomanip>
#include "jwt-cpp/jwt.h"

class Authentication {
private:
    static std::string getSecret();

    /// Used to validate a given token and return token claims
    /// \param token token which should be validated
    static std::vector<std::array<std::string, 2>> getTokenClaims(const std::string &token);

    /// Used to create JWT-Tokens with custom claims
    /// \param claims Vector of claims to be added to the JWT-Token
    static std::string createToken(const std::vector<std::array<std::string, 2>> &claims);

public:

    /// Used to create new JWT-Token for user
    /// \param userId userId for which a token should be generated
    static std::string createTokenForUserId(const int &userId);

    /// Used to validate token
    /// \param token token to be validated
    /// \param userId userId for which the token should be validated for
    static bool tokenValidForUserId(const std::string &token, const int &userId);

    /// Used to hash user password, uses sha256
    /// \param password password to be hashed
    /// \returns hashed password
    static std::string hashPassword(std::string password);

};


#endif //API_CODE_AUTHENTICATION_H
