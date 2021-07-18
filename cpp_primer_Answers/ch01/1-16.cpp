// Write your own version of a program that prints the sum of
// a set of integers read from cin.

#include <iostream>

int main(void)
{
    int sum = 0, value = 0;

    using namespace std;
    while (cin >> value)
    {
        sum += value;
        cout << "input " << value << endl;
    }

    cout << sum << endl;

    return 0;
}