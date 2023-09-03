cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(HomeAutomation)

message("Building with CMake version: ${CMAKE_VERSION}")

# Storage Lib

# find_package(SqliteOrm REQUIRED)

add_library(storage
  src/storage/Database.cpp
)

# target_link_libraries(homeauto sqlite_orm::sqlite_orm)

target_include_directories(storage
  PUBLIC
    "include/storage"
)

# HomeAutomation Executable

add_executable(HomeAutomation
  src/Device.cpp
  src/main.cpp
)

target_include_directories(HomeAutomation
  PRIVATE
    "include"
)

target_link_libraries(HomeAutomation PRIVATE storage)