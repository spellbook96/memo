#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    vector<int> ivec{1,2,3,4,5};
    vector<string> svec{"123","321"};

    for(auto it = svec.begin();!it->empty();++it)
        cout << *it << endl;
    
    return 0;
}
