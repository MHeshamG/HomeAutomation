#ifndef CORE_DATABASESTORE_H
#define CORE_DATABASESTORE_H

#include <DataStore.h>
#include <IDatabase.h>

using Core::DataStore;
using Core::IDatabase;

namespace Core
{
    template<typename T>
    class DatabaseStore : public DataStore<T, IDatabase>
    {
        public:
            DatabaseStore(std:: string id);
            DatabaseStore(DatabaseStore const&) = delete;
			DatabaseStore(DatabaseStore &&) = default;
			DatabaseStore& operator=(DatabaseStore const&) = delete;
			DatabaseStore& operator=(DatabaseStore &&) = default;
			~DatabaseStore() = default;
            
            int getCount();

            std::vector<T> getAllEntities();

            // T getEntityWithId(std::string);
    };
}

#include <DatabaseStore.tpp>

#endif
