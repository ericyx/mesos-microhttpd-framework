SET(CMAKE_CXX_FLAGS "-std=c++11")

INCLUDE_DIRECTORIES(/usr/include)
INCLUDE_DIRECTORIES(/usr/local/include)

add_executable(main main.cpp)
TARGET_LINK_LIBRARIES(main fileserver_example.so libmesos_test_framework.so /usr/local/lib/libmicrohttpd.so /usr/lib/libmesos-0.22.1.so /usr/local/lib/libglog.so)
