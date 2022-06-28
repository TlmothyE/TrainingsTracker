cmake_minimum_required(VERSION 3.16)
project(API_Code)

set(CMAKE_CXX_STANDARD 20)

if(UNIX)
    if (APPLE)
        message(FATAL_ERROR "-- Apple is not supported")
    endif()
    find_package(Boost REQUIRED COMPONENTS system thread log program_options chrono)
    find_package(Threads REQUIRED)
    find_package(ZLIB)
    find_package(OpenSSL 1.0.1 REQUIRED)
    set(OPENSSL_VERSION "1.0.1")
elseif(WIN32)
    message(FATAL_ERROR "-- Windows is not supported")
else()
    message(FATAL_ERROR "-- Platform not supported")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBOOST_LOG_DYN_LINK")


# source files
add_executable(API_Code
        source/main.cpp
        source/controller/request/RequestController.cpp
        source/controller/request/RequestController.h
        source/foundation/network_utils.cpp
        source/foundation/basic_controller.cpp
        source/controller/request/APIBasicController.cpp
        source/controller/request/APIBasicController.h
        source/controller/request/UsersRequestController.cpp
        source/controller/request/UsersRequestController.h
        source/controller/request/Controllers.h
        source/controller/database/DBConnector.cpp
        source/controller/database/DBConnector.h
        source/controller/database/UsersDBController.cpp
        source/controller/database/UsersDBController.h
        source/models/WorkoutroutineModel.h
        source/models/UserModel.h
        source/controller/database/WorkoutroutineDBController.cpp
        source/controller/database/WorkoutroutineDBController.h
        source/controller/database/TableCreator.cpp source/controller/database/TableCreator.h
        source/controller/request/WorkoutroutineRequestController.cpp
        source/controller/request/WorkoutroutineRequestController.h
        source/models/ProductModel.h
        source/controller/request/ProductRequestController.h
        source/controller/request/ProductRequestController.cpp
        source/controller/database/ProductDBController.cpp
        source/controller/database/ProductDBController.h
        source/utils/Authentication.cpp
        source/utils/Authentication.h
        source/controller/request/AuthenticationRequestController.cpp
        source/controller/request/AuthenticationRequestController.cpp
        source/controller/database/ExerciseDBController.h
        source/controller/database/ExerciseDBController.cpp
        source/models/ExerciseModel.h
        source/controller/request/ExerciseRequestController.cpp
        source/controller/request/ExerciseRequestController.h)

# header search paths
set(MICROSERVICE_INCLUDE_DIR "./source/foundation/include")
set(CPPRESTSDK_INCLUDE_DIR "./libs/cpprestsdk/Release/include")
set(JWTCPP_INCLUDE_DIR "./libs/jwtcpp/include")
# set(LIBPQXX_INCLUDE_DIR "./libs/libpqxx/include")
# set(LIBPQXX_INCLUDE_DIR_BUILD "./libs/libpqxx/build.release/include")
message(MICROSERVICE " ${MICROSERVICE_INCLUDE_DIR}")
set(HEADER_SEARCH_PATHS ${CPPRESTSDK_INCLUDE_DIR} ${MICROSERVICE_INCLUDE_DIR} ${Boost_INCLUDE_DIR} ${OPENSSL_INCLUDE_DIR} ${JWTCPP_INCLUDE_DIR})

# libary search paths
set(OPENSSL_LIBS "${OPENSSL_LIBRARIES}")
set(CPPRESTSDK_LIBRARY "${PROJECT_SOURCE_DIR}/libs/cpprestsdk/build.release/Release/Binaries/libcpprest.a")
# set(LIBPQXX_LIBARY "${PROJECT_SOURCE_DIR}/libs/libpqxx/build.release/src/libpqxx.a")

set(LIBRARIES_SEARCH_PATHS ${CPPRESTSDK_LIBRARY} ${OPENSSL_LIBS} ${Boost_LIBRARIES} ZLIB::ZLIB)

message(BOOST_LIBS " ${Boost_LIBRARIES}")
message(OPENSSL_LIBS " ${OPENSSL_LIBS}")
message(CPPRESTSDK_LIBRARY " ${CPPRESTSDK_LIBRARY}")
message(LIBRARIES_SEARCH_PATHS " ${LIBRARIES_SEARCH_PATHS}")

include_directories(${HEADER_SEARCH_PATHS})

target_link_libraries(${PROJECT_NAME} ${LIBRARIES_SEARCH_PATHS} -lpqxx -lpq)
