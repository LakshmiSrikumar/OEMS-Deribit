#pragma once

#include <string>
#include "src/config/api_config.h"
#include <json.hpp>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp);

std::string sendRequest(const std::string& url, const json& payload, const std::string& accessToken = "");

std::string getAccessToken(const std::string& clientId, const std::string& clientSecret);

void placeOrder(const std::string& orderType, const std::string& price, const std::string& accessToken, const std::string& amount, const std::string& instrument)

void cancelOrder(const std::string& orderId, const std::string& accessToken);

void modifyOrder(const std::string& orderId, const std::string& newPrice, const std::string& accessToken,int amount);

void getOrderBook(const std::string& instrument, const std::string& accessToken);

void viewCurrentPosition(const std::string& accessToken, const std::string& instrument);

void getOpenOrders(const std::string& accessToken);



