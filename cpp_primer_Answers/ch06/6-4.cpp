#include <iostream>

int fact(int val)
{
    int result = 1;
    for (int i = val; i > 1; --i)
    {
        result *= i;
    }

    return result;
}

int main(void)
{
    int value;
    using namespace std;
    while (cin >> value)
    {
        cout << fact(value) <<endl;
    }

    return 0;
}