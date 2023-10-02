#include <DatabaseStore.h>

namespace Core
{
    template<typename T>
    DatabaseStore<T>::DatabaseStore(std:: string id) : DataStore<T, IDatabase>{id}
    {
                    
    }

    template<typename T>            
    int DatabaseStore<T>::getCount(){
        return 0;
    }

    template<typename T>
    std::vector<T> DatabaseStore<T>::getAllEntities(){
        return std::vector<T>{};
    }

    // template<typename T>
    // T DatabaseStore<T>::getEntityWithId(std::string){
                
    // }
}