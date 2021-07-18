#include <iostream>
#include <vector>
#include <string>
#include <cctype>
std::string str_upper(std::string str);

int main(void)
{
    using namespace std;

    vector<string> svec;

    //push str to vector
    for(string str;cin>>str;svec.push_back(str));

    cout << "print vector" <<endl;
    //print vector
    for(string str: svec)
        cout << str << endl;

    cout << "upper vector" <<endl;
    for (auto &str: svec)
        str = str_upper(str);
    
    cout << "print vector" <<endl;
    for (auto str :svec)
    {
        cout << str << endl;
    }
    return 0;
}

std::string str_upper(std::string str)
{
    for (char &c : str)
    {
        c = toupper(c);
    }

    return str;
}