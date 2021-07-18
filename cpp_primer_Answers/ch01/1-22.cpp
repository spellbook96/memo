#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item, totalItem;
	using namespace std;

	while (cin >> item)
	{
		if (item.isbn() == totalItem.isbn())
		{
			totalItem += item;
		}
		else
		{
			totalItem = item;
		}
	}

	cout << totalItem << endl;

	return 0;
}