find_package(SQLite3 REQUIRED)

add_library(database OBJECT
  Database.cpp
)

target_link_libraries(database PUBLIC
  core
  SQLite::SQLite3
)

target_include_directories(database PUBLIC
  "${CMAKE_SOURCE_DIR}/source/include/dependencies/storage/database"
)