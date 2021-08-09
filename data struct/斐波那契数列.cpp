#include <iostream>
using std::cout; using std::endl;

int fib(int n)
{
    int f=0, g=1; // f(0),f(1)

    while(n-->0)
    {
        g = g + f;
        f = g - f;
    }
    
    return f;
}
int main()
{
    cout << fib(3) << endl;
    return 0;
}