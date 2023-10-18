set(TARGET dependency_database)

find_package(SQLite3 REQUIRED)

add_library(${TARGET} OBJECT
  Database.cpp
)

target_link_libraries(${TARGET} PUBLIC
  core::database
  SQLite::SQLite3
)

target_include_directories(${TARGET} PUBLIC
  "${CMAKE_SOURCE_DIR}/source/include/dependencies/database"
)