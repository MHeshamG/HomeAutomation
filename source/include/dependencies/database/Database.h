#ifndef DEPENDENCIES_DATABASE_H
#define DEPENDENCIES_DATABASE_H

#include <iostream>
#include <string>

#include <sqlite3.h>

#include <IDatabase.h>

namespace Dependencies
{
    class Database : public Core::IDatabase
    {
        public:
            auto init() -> ErrorCode override;
            auto executeQuery(std::string) -> ErrorCode override;
        private:
            sqlite3* DB;
    };
};

#endif