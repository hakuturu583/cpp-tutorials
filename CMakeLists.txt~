cmake_minimum_required(VERSION 2.8)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_COMPILER g++)

#sample1
set(sample1_src ${CMAKE_SOURCE_DIR}/src/sample1/main.cpp)
add_executable(sample1 ${sample1_src})

#sample2
include_directories(${CMAKE_SOURCE_DIR}/include/sample2)
set(sample2_src ${CMAKE_SOURCE_DIR}/src/sample2/main.cpp ${CMAKE_SOURCE_DIR}/src/sample2/human.cpp)
add_executable(sample2 ${sample2_src})

#rocket_simulation
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/include/rocket_simulation)
set(rocket_simulation_src ${CMAKE_SOURCE_DIR}/src/rocket_simulation/main.cpp ${CMAKE_SOURCE_DIR}/src/rocket_simulation/rocket.cpp)
add_executable(rocket_simulation ${rocket_simulation_src})
target_link_libraries(rocket_simulation ${PYTHON_LIBRARIES})
