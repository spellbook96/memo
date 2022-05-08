#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    n=n/10;
    int res=0;
    for(int i=0;i<=a;++i)
    {
        for(int j=0;j<=b;++j)
        {
            for(int k=0;k<=c;++k)
            {
                if(50*i+10*j+5*k==n)
                    ++res;
            }
        }
    }
    cout << res << endl;
    return 0;
}