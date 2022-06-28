//
// Created by jeremias on 25.05.22.
//

#include "Authentication.h"

std::string Authentication::createTokenForUserId(const int &userId) {
    std::vector<std::array<std::string, 2>> claims;
    claims.emplace_back(std::array<std::string, 2>{"userId", std::to_string(userId)});

    return createToken(claims);
}

bool Authentication::tokenValidForUserId(const std::string &token, const int &userId) {
    std::vector<std::array<std::string, 2>> claims;
    try {
        claims = getTokenClaims(token);
    } catch (...) {
        return false;
    }
    for (auto &claim: claims) {
        if (claim[0] == "userId" && claim[1] == std::to_string(userId)) return true;
    }
    return false;
}

std::string Authentication::createToken(const std::vector<std::array<std::string, 2>> &claims) {
    auto token_builder = jwt::create()
            .set_issuer("auth0")
            .set_type("JWS")
            .set_issued_at(std::chrono::system_clock::now());

    for (const auto &item: claims) {
        token_builder.set_payload_claim(item[0], jwt::claim(item[1]));
    }

    return token_builder.sign(jwt::algorithm::hs256{getSecret()});
}

std::vector<std::array<std::string, 2>> Authentication::getTokenClaims(const std::string &token) {
    auto decoded = jwt::decode(token);
    auto verifier = jwt::verify()
            .allow_algorithm(jwt::algorithm::hs256{getSecret()})
            .with_issuer("auth0");

    // throws error if token is invalid
    verifier.verify(decoded);

    std::vector<std::array<std::string, 2>> returnVec;

    // adds token claims to return vector
    for (auto &item: decoded.get_payload_claims()) {
        auto itemType = item.second.get_type();
        auto secondItem = item.second;
        std::string itemAsString;

        switch (itemType) {
            case jwt::json::type::integer:
                itemAsString = std::to_string(secondItem.as_int());
                break;
            case jwt::json::type::string:
                itemAsString = secondItem.as_string();
                break;
            case jwt::json::type::boolean:
                itemAsString = secondItem.as_bool() ? "true" : "false";
                break;
            case jwt::json::type::number:
                itemAsString = std::to_string(secondItem.as_number());
                break;
            case jwt::json::type::array:
                for (auto &arrayItem: secondItem.as_array()) {
                    itemAsString + arrayItem.to_str() + " ";
                }
                break;
            case jwt::json::type::object:
                itemAsString = "object";
                break;
        }

        returnVec.emplace_back(std::array<std::string, 2>{item.first, itemAsString});
    }
    return returnVec;
}

std::string Authentication::getSecret() {
    const char *jwt_secret_raw = getenv("JWT_SECRET");
    std::string jwt_secret = (jwt_secret_raw ? jwt_secret_raw : "");

    if (jwt_secret.empty()) {
        std::cerr << "[ERROR] Needed environment variables for authentication not set, needed:\n\tJWT_SECRET"
                  << std::endl;
        exit(EXIT_FAILURE);
    }

    return jwt_secret;
}


std::string Authentication::hashPassword(std::string password) {
    const std::string basic_salt = "KLOASDIOJASLKDJ";
    password.append(basic_salt);
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, password.c_str(), password.size());
    SHA256_Final(hash, &sha256);
    std::stringstream ss;
    for (unsigned char i: hash) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int) i;
    }
    return ss.str();
}
