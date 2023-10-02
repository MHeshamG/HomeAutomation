#ifndef CORE_DATASTORE_H
#define CORE_DATASTORE_H

#include <vector>
#include <memory>

namespace Core
{
	template<typename T, typename Source>
	class DataStore
	{
		public:
			DataStore(std:: string id);
			DataStore(DataStore const&) = delete;
			DataStore(DataStore &&) = default;
			DataStore& operator=(DataStore const&) = delete;
			DataStore& operator=(DataStore &&) = default;
			~DataStore() = default;

			void setSource(std::shared_ptr<Source> source);

			virtual int getCount() = 0;

			virtual std::vector<T> getAllEntities() = 0;

			// virtual T getEntityWithId(std::string) = 0;

		protected:
			std::shared_ptr<Source> source;
			std::string dataStoreId;
	};

} //Namespace Core

#include <DataStore.tpp>

#endif