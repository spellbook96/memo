#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str;
    
    cin >> str;

    if(!str.empty())
    {
        for (decltype(str.size()) i =0; i<str.size();++i)
        {
            str[i]='X';
        }
    }
    cout << str <<endl;

    return 0;
}