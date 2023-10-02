#include <Database.h>

using Dependencies::Database;

Database::ErrorCode Database::init()
{
    int ec = sqlite3_open("home_auto.db", &DB);
    if (ec) {
        std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
    }
    else
        std::cout << "Opened Database Successfully!" << std::endl;
    return Database::ErrorCode::kSuccess;
}

Database::ErrorCode Database::executeQuery(std::string)
{
    return Database::ErrorCode::kSuccess;
}