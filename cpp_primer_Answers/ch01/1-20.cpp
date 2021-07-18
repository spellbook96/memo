#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    std::cin >> book;              // read a pair of transactions
    std::cout << book <<std::endl; // print their sum
    return 0;
}