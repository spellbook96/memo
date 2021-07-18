#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string s1, s2;

    cout << "Enter two string" << endl;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << "s1 =s2";
    else
    {
        if (s1 > s2)
            cout << "s1" << endl;
        else
            cout << "s2" << endl;
    }

    cout << "Enter two string" << endl;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
        cout << "s1 size = s2 size";
    else
    {
        if (s1.size() > s2.size())
            cout << "s1 size > s2 size";
        else
            cout << "s2 size >s1 seze";
    }
    
    return 0;
}