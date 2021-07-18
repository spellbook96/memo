#include <iostream>

int larger_one (int a, int *b)
{
    return a > *b ? a : *b; 
}

int main(void)
{
    using std::cout;using std::endl;
    int a = 5;
    int b = 3;

    cout << "较大的是：" << larger_one(a,&b) <<endl;
    return 0;
}