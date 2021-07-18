#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    vector<unsigned> scores(11, 0);

    for (unsigned grade = 0; cin >> grade;)
    {
        auto it = scores.begin() + grade / 10;
        *it += 1;
    }

    for (auto score : scores)
    {
        cout << score << endl;
    }

    return 0;
}
