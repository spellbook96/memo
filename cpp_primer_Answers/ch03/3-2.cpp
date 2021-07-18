#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string line;
    getline(cin, line);
    cout << line << endl;

    string word;
    cin >> word;
    cout << word << endl;

    return 0;
}