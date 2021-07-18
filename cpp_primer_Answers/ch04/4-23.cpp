#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    string s ="word";
    string p1 = s + ((s[s.size()-1] == 's') ? "" : "s");

    cout << p1 << endl;


    return 0;
}