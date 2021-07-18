#include <vector>
#include <iostream>
using std::vector; using std::cout; using std::endl;

void print(vector<int>::iterator first, vector<int>::iterator last)
{
    if(first != last)
    {
        cout << *first << " ";
        print(++first,last);
    }
    else
        return;
}

int main()
{
    vector<int> iv={1,2,3,4};
    print(iv.begin(),iv.end());
    return 0;
}