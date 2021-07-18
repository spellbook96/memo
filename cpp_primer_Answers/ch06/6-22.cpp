#include <iostream>

void swap_p(int* &a, int* &b)
{
    int *tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int a = 5;
    int *pa = &a;
    int b = 8;
    int *pb = &b;

    swap_p(pa,pb);
    
    std::cout << *pa << std::endl << *pb << std::endl;

    return 0;
}