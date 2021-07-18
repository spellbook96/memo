#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it = ivec.begin() ;it!=ivec.end();++it)
    {
        *it = (*it % 2 == 1) ? *it * 2: *it;
        cout << *it << endl;
    }
}