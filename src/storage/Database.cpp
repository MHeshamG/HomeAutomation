#include <Database.h>

using Dependencies::Database;

Database::ErrorCode Database::init()
{
    return Database::ErrorCode::kSuccess;
}

Database::ErrorCode Database::executeQuery(std::string)
{
    return Database::ErrorCode::kSuccess;
}