#include <iostream>
#include <string>

using namespace std;

int j = 1;
const int *const p1 = &j;

class A
{
    public:
    A()
    {
        cout << "class A init..."<< endl;
    }
    private:
    int value=0;
};

class B
{
    public:
    B()
    {
        cout << "class B init..."<< endl;
    }
};

class C: public A
{
    protected:
    B b;
    public:
    C()
    {
        cout << "class C init..." << endl;
    }
};

int main(void)
{
    A a;
    B b;
    C c;
    int d=0;
    cout << sizeof(a)<<endl << sizeof(b)<< endl << sizeof(c) <<endl<<sizeof(d)<< endl;
    return 0;
}