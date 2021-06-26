#include <iostream>
#include <vector>
#include <string>
#include "Stock.h"
using namespace std;



int main()
{
    Stock stock;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		STOCK temp;
		cin >> temp.name >> temp.price;
		stock.insertIntoArr(temp);
	}	
	vector<STOCK> arr = stock.sortStockByPrice(false);
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i].name << " "<<arr[i].price << endl;
	}
}