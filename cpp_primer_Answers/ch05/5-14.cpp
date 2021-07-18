#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str1,str2,tmp;
    int cnt1=0,cnt2=0;
    while(cin >> tmp)
    {
        cout << tmp <<endl;
        if(tmp!=str1){
            
            str1 = tmp;
            cnt1 =1;
        }
        else if(tmp == str1)
            if(cnt1>cnt2){
                cnt2 = cnt1;
                str2 = str1;
            }
            ++cnt1;
    }

    cout << str2 << " 連続" << cnt2 <<"回出た。" <<endl;
    return 0;
}