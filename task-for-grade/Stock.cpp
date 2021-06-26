#include "Stock.h"

void swap(STOCK* r, STOCK* s)
{
	STOCK temp = *r;
	*r = *s;
	*s = temp;
	return;
}

void Stock::insertIntoArr(STOCK stock)
{
	arr.push_back(stock);
}

std::vector<STOCK> Stock::getStockArr()
{
	return arr;
}

void Stock::setStockArr(std::vector<STOCK> arr)
{
	this->arr = arr;
}

std::vector<STOCK> Stock::sortStockByPrice(bool order)
{
	if (order)
	{
		std::vector<STOCK>temp = arr;
		for (int i = 0; i < temp.size()-1; i++)
			for (int j = 0; j < temp.size() - i - 1; j++)
				if (temp[j].price > temp[j + 1].price)
					swap(&temp[j], &temp[j + 1]);
		return temp;
	}
	else
	{
		std::vector<STOCK>temp = arr;
		for (int i = 0; i < temp.size() - 1; i++)
			for (int j = 0; j < temp.size() - i - 1; j++)
				if (temp[j].price < temp[j + 1].price)
					swap(&temp[j], &temp[j + 1]);
		return temp;
	}
}
