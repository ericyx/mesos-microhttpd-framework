cmake_minimum_required(VERSION 2.8)

PROJECT(main)

SET(CMAKE_CXX_FLAGS "-std=c++11")

INCLUDE_DIRECTORIES(/usr/include)
INCLUDE_DIRECTORIES(/usr/local/include)

ADD_EXECUTABLE(main main.cpp)
TARGET_LINK_LIBRARIES(main /usr/lib/libtest_framework.so /usr/local/lib/libmesos-0.22.1.so)
