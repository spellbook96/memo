#include <iostream>
using std::cout; using std::string; using std::endl;

int main(int argc, char *argv[])
{
    string str;
    for(int i =1; i!=argc; ++i)
    {
        str+=argv[i];
    }
    cout << str <<endl;

    return 0;
}