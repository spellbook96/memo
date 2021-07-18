#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str,tmp;
    while(cin >> str)
    {
        tmp = str;
        if(tmp == str){
            cout << "連続出現単語：" << tmp <<endl;
            break;
            
    }
    return 0;
}