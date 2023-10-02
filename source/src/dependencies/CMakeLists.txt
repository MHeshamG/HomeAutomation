add_subdirectory(database)

set(TARGET dependencies)

add_library(${TARGET})

target_include_directories(${TARGET} PUBLIC 
    "${CMAKE_SOURCE_DIR}/source/include/dependencies/storage"
)

target_link_libraries(${TARGET} PUBLIC database)