#include <iostream>

int main(void)
{
    int a = 3, b = 4;
    decltype(a) c = a;   //as int
    decltype((b)) d = a; // as &int
    ++c;
    ++d;

    return 0;
}