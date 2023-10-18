add_subdirectory(storage)

add_library(core
    model/Device.cpp
)

target_include_directories(core
  PUBLIC
    "${CMAKE_SOURCE_DIR}/source/include/core/model/devices"    
)

target_link_libraries(core 
  PUBLIC
    storage
)