cmake_minimum_required (VERSION 2.6)
project (autonomousboat)
# The version number.
set (autonomousboat_VERSION_MAJOR 1)
set (autonomousboat_VERSION_MINOR 0)

include_directories ("source/sensors")
add_subdirectory (source/sensors) 
 
include_directories ("source/controls")
add_subdirectory (source/controls) 

include_directories ("source/simulation")
add_subdirectory (source/simulation) 

include_directories ("source/")
add_subdirectory (source/) 
 
add_executable(autonomousboat source/main.c)
target_link_libraries (autonomousboat main sensors controls)

add_executable(autonomousboat-sim source/main-sim.c)
target_link_libraries (autonomousboat-sim main simulation)
