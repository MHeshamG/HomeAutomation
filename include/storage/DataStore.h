#ifndef DEPENDENCIES_DATASTORE_H
#define DEPENDENCIES_DATASTORE_H

#include <IDataStore.h>

namespace Dependencies
{
	template<typename T, typename Source>
	class DataStore : public IDataStore<T,Source>
	{
		public:
			DataStore(std:: string id) : dataStoreId{id}
			{

			}
			DataStore(DataStore const&) = delete;
			DataStore(DataStore &&) = default;
			DataStore& operator=(DataStore const&) = delete;
			DataStore& operator=(DataStore &&) = default;
			~DataStore() = default;

			int getCount()
			{
				return 0;
			}

			std::vector<T> getAllEntities()
			{
				return std::vector<T>{};
			}

			T getEntityWithId(std::string)
			{

			}

		private:
			std::string dataStoreId;
	};

} //Namespace HomeAutomation

#endif