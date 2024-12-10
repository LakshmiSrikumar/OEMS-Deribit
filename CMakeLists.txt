cmake_minimum_required(VERSION 3.10)
project(DeribitOrderManagement)

set(CMAKE_CXX_STANDARD 17)



include_directories(src/api src/config src/models src/websocket)
include_directories(D:\D drive\Downloads\boost_1_86_0\boost_1_86_0)

# Define the executable
add_executable(DeribitOrderManagement main.cpp 
    src/api/deribit_api.cpp 
    src/models/orders.cpp 
    src/models/orderbook.cpp 
    src/models/position.cpp 
    src/websocket/websocket_server.cpp)

target_link_libraries(DeribitOrderManagement PRIVATE CURL::libcurl Boost::system)