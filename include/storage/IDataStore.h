#ifndef DEPENDENCIES_IDATASTORE_H
#define DEPENDENCIES_IDATASTORE_H

#include <vector>

namespace Dependencies
{
    template<typename T, typename Source>
    class IDataStore
    {
        public:
            virtual auto getCount() -> int = 0;
            virtual auto getAllEntities() -> std::vector<T> = 0;
            virtual auto getEntityWithId(std::string) -> T = 0;

            void setSource(std::shared_ptr<Source>& source)
			{
				this->source = source; 
			}
            
        protected:
            std::shared_ptr<Source> source; 
    };
};

#endif