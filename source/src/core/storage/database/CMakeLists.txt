set(TARGET database)

add_library(${TARGET} INTERFACE)
add_library(core::${TARGET} ALIAS ${TARGET})

target_include_directories(${TARGET}
  INTERFACE
    "${CMAKE_SOURCE_DIR}/source/include/core/storage/database"    
)