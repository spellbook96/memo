#include <iostream>
#include <vector>
int main(void)
{
    using namespace std;

    vector<int> ivec;

    for(int ival;cin>>ival;ivec.push_back(ival));

    cout << "print ivec" << endl;

    for(int i : ivec)
    {
        cout << i << endl; 
    }

    return 0;
}