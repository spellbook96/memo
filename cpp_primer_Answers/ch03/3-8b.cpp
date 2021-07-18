#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str;
    
    cin >> str;

    if(!str.empty())
    {
        int i=0;
        while(str[i]!='\0')
        {
            str[i]='X';
            ++i;
        }
    }
    cout << str <<endl;

    return 0;
}