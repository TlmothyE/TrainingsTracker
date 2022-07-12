#include <iostream>
#include "foundation/include/usr_interrupt_handler.hpp"
#include "foundation/include/runtime_utils.hpp"
#include "controller/database/TableCreator.h"
#include "utils/Authentication.h"

#include "controller/request/RequestController.h"

int main([[maybe_unused]] int argc, [[maybe_unused]] const char *argv[]) {
    cfx::InterruptHandler::hookSIGINT();

    controller::request::RequestController server;
    server.setEndpoint("http://host_auto_ip4:6502/v1/tracker/api");

    // controller::database::TableCreator().createDatabaseTables();

    try {
        server.accept().wait();
        std::cout << "Traingingstracker API listening at: " << server.endpoint() << std::endl;

        InterruptHandler::waitForUserInterrupt();

        server.shutdown().wait();
    }
    catch (std::exception &e) {
        std::cerr << "something failed: \n" << e.what() << std::endl;
    }
    catch (...) {
        RuntimeUtils::printStackTrace();
    }

    return 0;
}
