#include <iostream>
#include "src/api/deribit_api.h"
#include "src/config/api_config.h"
#include "src/websocket/websocket_server.h"
#include <boost/asio.hpp> // Include Boost Asio

int main() {
    // Initialize the API
    DeribitAPI api(API_KEY, API_SECRET);
    std::string accessToken = getAccessToken(API_KEY, API_SECRET);
    
    if (!accessToken.empty()) 
    {
        placeOrder("buy","1000", accessToken, "1000", "BTC-5AUG23");
        placeOrder("buy","10", accessToken, "10", "BTC-PERPETUAL");
        placeOrder("buy","50", accessToken, "50", "BTC-PERPETUAL");
        placeOrder("sell","20", accessToken, "20", "ETH-PERPETUAL");

        //getOpenOrders(accessToken);
        //cancelOrder("30454002197",accessToken);
        //modifyOrder("30453961880","500",accessToken,500);
        //getOrderBook("ETH-PERPETUAL",accessToken);
        //viewCurrentPosition(accessToken,"ETH-PERPETUAL");
    }
    
    return 0;

}