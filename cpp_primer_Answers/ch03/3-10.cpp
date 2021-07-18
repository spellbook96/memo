#include <iostream>
#include <string>
#include <cctype>
int main(void)
{
    using namespace std;

    string s;
    cin >> s;

    if (!s.empty())
    {
        for (decltype(s.size()) i=0; i < s.size(); ++i)
        {
            if (ispunct(s[i]))
                s[i] = '\0';
        }
    }

    cout << s << endl;

    return 0;
}