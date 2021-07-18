// Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers.

#include <iostream>

int main(void)
{
    int a = 0, b = 0;

    using namespace std;
    cout << "Please enter two integers";
    cin >> a >> b;

    if (a <= b)
    {
        while (a <= b)
        {
            cout << a << endl;
            ++a;
        }
    }
    else
    {
        while (a >= b)
        {
            cout << b << endl;
            ++b;
        }
    }

    return 0;
}