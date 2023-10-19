add_subdirectory(database)

set(TARGET storage)

add_library(${TARGET}
    INTERFACE
)
add_library(core::${TARGET} ALIAS ${TARGET})

target_include_directories(${TARGET}
  INTERFACE
    "${CMAKE_SOURCE_DIR}/source/include/core/storage"
    "${CMAKE_SOURCE_DIR}/source/src/core/storage"
)

target_link_libraries(${TARGET}
  INTERFACE
    database
)