#include <iostream>
#include <string>
#include "Sales_data.h"

int main(void)
{
    double price = 0;
    struct Sales_data data1, data2;

    using namespace std;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = price * data1.units_sold;

    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = price * data2.units_sold;

    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";

        if (totalCnt != 0)
            cout << totalRevenue / totalCnt << endl;
        else
            cout << "(no sales)" << endl;
        return 0;
    }
    else
    {
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;
    }
    return 0;
}