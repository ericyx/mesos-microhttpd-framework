SET(CMAKE_CXX_FLAGS "-std=c++11")

INCLUDE_DIRECTORIES(/usr/include)
INCLUDE_DIRECTORIES(/usr/local/include)

add_library(mesos-microhttpd-framework SHARED test_framework.cpp test_microhttpd.cpp)
TARGET_LINK_LIBRARIES(mesos-microhttpd-framework /usr/local/lib/libmesos-0.22.1.so /usr/local/lib/libglog.so /usr/local/lib/libmicrohttpd.so)
