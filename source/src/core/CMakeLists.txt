add_library(core
    model/Device.cpp
)

target_include_directories(core
  PUBLIC
    "${CMAKE_SOURCE_DIR}/source/include/core/model/devices"
    "${CMAKE_SOURCE_DIR}/source/include/core/storage"
    "${CMAKE_SOURCE_DIR}/source/include/core/storage/database"
    
    "${CMAKE_SOURCE_DIR}/source/src/core/storage"
)