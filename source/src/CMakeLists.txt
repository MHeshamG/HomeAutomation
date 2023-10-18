add_subdirectory(core)
add_subdirectory(dependencies)

# HomeAutomation Executable

add_executable(HomeAutomation
  main.cpp
)

target_link_libraries(HomeAutomation PUBLIC core dependencies)