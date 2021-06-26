#pragma once
#include <iostream>
#include <string>
#include <vector>

struct STOCK {
	std::string name;
	double price;
};

class Stock
{
public:
	void insertIntoArr(STOCK stock);
	std::vector<STOCK> getStockArr();
	void setStockArr(std::vector<STOCK> arr);
	std::vector<STOCK> sortStockByPrice(bool order);
private:
	
	std::vector<STOCK> arr;
};