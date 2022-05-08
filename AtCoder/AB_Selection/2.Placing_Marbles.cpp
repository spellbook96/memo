#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0;
    string str;
    cin >> str;
    for(char c : str)
    {
        if(c=='1')
            ++cnt;
    }
    cout << cnt << endl;
    return 0;
}