#include <iostream>
#include <string>

int j = 1;
const int *const p1 = &j;

int main(void)
{
    using namespace std;

    constexpr int *p = &j;
    cout << *p << endl;

    j = 0;
    cout << *p << endl;

    const int a = 1;

    constexpr const int *const *p2 = &p1;

    cout << **p2 << endl;
    j = 1;
    cout << **p2 << endl;

    return 0;
}