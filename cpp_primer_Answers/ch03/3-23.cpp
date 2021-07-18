#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
    {
        *iter = *iter * 2;
        cout << *iter << endl;
    }

    return 0;
}
