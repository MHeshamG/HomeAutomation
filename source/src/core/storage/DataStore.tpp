#include <DataStore.h>

namespace Core
{
	template<typename T, typename Source>
	DataStore<T, Source>::DataStore(std::string id) : dataStoreId{id}
	{
				
	}

	template<typename T, typename Source>
	void DataStore<T, Source>::setSource(std::shared_ptr<Source> source)
	{
		this->source = source;
	}

} //Namespace Core