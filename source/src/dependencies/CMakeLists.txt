add_subdirectory(database)

set(TARGET dependencies)

add_library(${TARGET} x.cpp)

target_link_libraries(${TARGET} PUBLIC dependency_database)