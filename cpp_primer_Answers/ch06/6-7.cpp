#include <iostream>

int func(void)
{
    static int cnt =-1;
    ++cnt;
    return cnt;        
}

int main(void)
{
    int value;
    using namespace std;
    
    cout << func() <<func() << endl;
    cout << func() <<endl;
    return 0;
}