#ifndef DEPENDENCIES_IDATABASE_H
#define DEPENDENCIES_IDATABASE_H

namespace Core
{
    class IDatabase
    {
        public:
            enum class ErrorCode
            {
                kSuccess,
                kGeneralError
            };

            virtual auto init() -> ErrorCode = 0;
            virtual auto executeQuery(std::string) -> ErrorCode = 0;
    };
};

#endif