#include <bits/stdc++.h>
using namespace std;

int cal(int x)
{
    int res = 0;
    while (x != 0)
    {
        res += x % 10;
        x = x / 10;
    }
    return res;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        int temp = cal(i);
        if (temp >= a && temp <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}