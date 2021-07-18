#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    int a[] ={2,3,4,5,6};
    vector<int> ivec(begin(a),end(a));

    for (auto it =ivec.begin();it !=ivec.end();it++)
    {
        cout << *it << endl;
    }

    return 0;
}
