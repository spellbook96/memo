#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;
    using std::vector;

    vector<string> svec;

    for (string str; cin >> str; svec.push_back(str))
        ;

    cout << "print svec" << endl;

    //check for vector
    for (auto i : svec)
    {
        cout << i << endl;
    }

    return 0;
}