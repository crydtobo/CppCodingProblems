cmake_minimum_required(VERSION 3.16)
project(CPPFreeCoding VERSION 0.1.0 DESCRIPTION "Cpp Learning Coding Newsletter")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -g")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

SET(SRC 
        main.cpp 
        src/tasks.cpp
        src/functions.cpp
        src/myUniquePtr.cpp
        src/myVector.cpp
        src/myArray.cpp
        src/myLinkedList.cpp
        src/myTree.cpp
        tests/test.cpp
        )
SET(GTEST_Files 
    gtest
    gtest_main
)
add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} ${TEST_LINK_LIBS} ${GTEST_Files} pthread )

include_directories(include)
 
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)
