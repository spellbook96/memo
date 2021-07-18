#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str;
    
    cin >> str;
    for (auto &c : str)
    {
        c = 'X';
    }

    cout << str <<endl;

    return 0;
}