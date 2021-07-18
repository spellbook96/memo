#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    int score;
    while (cin >> score)
    {
        string grade = (score > 90) ? "high pass" : (score >= 60 && score < 75) ? "low pass"
                                                  : (score < 60)                  ? "fail"
                                                                                  : "pass";

        cout << grade << endl;
    }
}