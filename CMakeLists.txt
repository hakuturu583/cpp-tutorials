cmake_minimum_required(VERSION 2.8)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_COMPILER g++)
include_directories(${CMAKE_SOURCE_DIR}/include)

set(sample1_src ${CMAKE_SOURCE_DIR}/src/sample1.cpp)
add_executable(sample1 ${sample1_src})

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
set(rocket_simulation_src ${CMAKE_SOURCE_DIR}/src/main.cpp ${CMAKE_SOURCE_DIR}/src/rocket.cpp)
add_executable(rocket_simulation ${rocket_simulation_src})
target_link_libraries(rocket_simulation ${PYTHON_LIBRARIES})
