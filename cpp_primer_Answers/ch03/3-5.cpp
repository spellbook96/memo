#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string tmp, s;

    while (cin >> tmp)
    {
        if (!s.empty())
            s += " ";
        s += tmp;
    }

    cout << s << endl;

    return 0;
}