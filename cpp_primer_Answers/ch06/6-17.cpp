#include <iostream>
#include <string>
#include <cctype>

bool any_capital(const std::string &s);
void tolower_str(std::string &s);

int main(void)
{
    using namespace std;
    string str = "Hello World";
    cout << any_capital(str) << endl;
    tolower_str(str);
    cout << str << endl;
    return 0;
}

bool any_capital(const std::string &s)
{
    for (auto c : s)
    {
        if (isupper(c))
            return true;

    }
    return false;
}

void tolower_str(std::string &s)
{
    if(!any_capital) return;

    for (auto &c: s)
    {
        c=tolower(c);
    }
}
