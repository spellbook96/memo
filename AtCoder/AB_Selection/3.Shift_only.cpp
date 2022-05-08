#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int cnt=0,min=0x3f3f3f;
    for(int i=0;i<N;++i)
    {
        int temp;
        cin>>temp;
        if(temp % 2 !=0)
        {
            cout << "0" << endl;
            return 0;
        }
        else
        {
            cnt=0;
            while(temp%2==0)
            {
                temp /=2;
                ++cnt;
            }
            if(cnt<min)
                min = cnt;
        }
    }
    cout << min << endl;
    return 0;
}