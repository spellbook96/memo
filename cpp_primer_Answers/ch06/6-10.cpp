#include <iostream>
#include <vector>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    using namespace std;

    int a =1,b=2;
    cout << a <<endl << b <<endl;

    swap(&a,&b);
    cout << a <<endl << b <<endl;

    std::vector<int> vec(10);
    return 0;
}