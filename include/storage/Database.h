#ifndef DEPENDENCIES_DATABASE_H
#define DEPENDENCIES_DATABASE_H

#include <string>

namespace Dependencies
{
    class Database
    {
        public:
            enum class ErrorCode
            {
                kSuccess,
                kGeneralError
            };

            auto init() -> ErrorCode;
            auto executeQuery(std::string) -> ErrorCode;
    };
};

#endif