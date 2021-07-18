#include <iostream>

void func_abs(int val)
{
    using namespace std;
    if (val >= 0)
        cout << val <<endl;
    else if(val <0)
        cout << val*(-1) <<endl;

        
}

int main(void)
{
    int value;
    using namespace std;
    
    func_abs(-2);

    return 0;
}