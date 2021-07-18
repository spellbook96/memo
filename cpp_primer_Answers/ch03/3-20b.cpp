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

    for (decltype(ivec.size()) i = 0; i < ivec.size() / 2; ++i)
    {
        if (ivec[i] == ivec[ivec.size() - i - 1])
            break;
        cout << ivec[i] << " + " << ivec[ivec.size() - i - 1] << " = " << ivec[i] + ivec[ivec.size() - i - 1] << endl;
    }

    return 0;
}
