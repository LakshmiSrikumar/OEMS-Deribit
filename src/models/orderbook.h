#pragma once

#include <vector>
#include <string>
#include <utility>

struct OrderbookEntry {
    double price;
    int quantity;
};

struct Orderbook{
    std::vector<OrderbookEntry> bids;
    std::vector<OrderbookEntry> asks;
};

