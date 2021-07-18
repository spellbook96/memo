#include <iostream>
#include <vector>

using std::begin; using std::end;
void print(const int &i)
{
    std::cout << i << std::endl;
}

void print(const int *j, size_t size)
{
    for(size_t i = 0; i < size; ++i)
        std::cout << j[i] << " ";
    std::cout << std::endl;

}

int main()
{
    print(1);
    int j[2]={1,2};
    print(j,end(j)-begin(j));

    return 0;
}