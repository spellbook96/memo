#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str1,str2;

    do{
        str1.clear();
        str2.clear();
        cout << "Please enter two strings: ";
        cin >> str1 >> str2;
        if(str1.size() > str2.size()){
            cout << "The shorter one is " << str2 <<endl;
        }
        else{
            cout << "The shorter one is " << str1 << endl;
        }

    }while(!str1.empty() && !str2.empty());

    return 0;
}