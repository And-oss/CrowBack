#include "crow_all.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app , "/")([](){
        crow::mustache::context ctx;
        auto page = crow::mustache::load("page.html").render();
        return page;
    });

    app.bindaddr("127.0.0.1").port(45600).multithreaded().run();

    return 0;
}