#
#      Author: Artur Waz
#      Year: 2015
#
cmake_minimum_required(VERSION 2.8)



#set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.4.1\\5.4\\mingw491_32")
#set(CMAKE_PREFIX_PATH CMAKE_PREFIX_PATH "C:\\boost\\")
#set(CMAKE_PREFIX_PATH CMAKE_PREFIX_PATH "F:\\_compilers\\_lib\\opencv\\build")


set(PROJECT_NAME template)
project(${PROJECT_NAME})


set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_SHARED_LINKER_FLAGS "-static")
if (NOT MSVC)
    set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
endif (NOT MSVC)
if (UNIX)
    set(CMAKE_CXX_FLAGS "-pthread ${CMAKE_CXX_FLAGS}")
endif (UNIX)


#find_package()

#include_directories()

#add_subdirectory()


set(LIBS )


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${LIBS})




if (1)
    enable_testing()
    
    file(GLOB_RECURSE testsList test___*.cpp)
    foreach(i IN LISTS testsList)
        string(REPLACE "/" ";" iL ${i})
        list(GET iL -1 file)
        string(REPLACE ".cpp" "" file ${file})
        project(${file})
        add_executable(${file} ${i})
        target_link_libraries(${file} boost_unit_test_framework ${LIBS})
        add_test(${file} ${file})
    endforeach()
endif()

