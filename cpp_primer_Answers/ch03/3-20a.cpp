#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(void)
{
    using namespace std;

    vector<int> ivec;

    for (int val = 0; cin >> val; ivec.push_back(val))
        ;

    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; ++i)
    {
        cout << ivec[i] << " + " << ivec[i + 1] << " = " << ivec[i] + ivec[i + 1] << endl;
    }
    
    return 0;
}
