#include <iostream>

void func(void)
{
    int a, b;
    using namespace std;

    cin >> a >> b;
    if (b == 0)
        throw runtime_error("被除数为0");
    cout << a / b << endl;
}

int main(void)
{
    using namespace std;

    int a, b;
    try
    {
        func();
    }
    catch (runtime_error err)
    {
        cout << err.what();
        cout << "\nTry again? Y/n" << endl;
        char c;
        cin >> c;
        if (c == 'Y')
        {
            func();
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
