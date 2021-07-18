#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    int iarr[5]={1,2,3,4,5};
    
    void *p1,*p2;

    p1 = iarr;
    p1 = p1 + sizeof(int);

  //  int *iptr = (int*)p1;
    cout << *(int*)p1 << endl;
  //  cout << *p2 << endl;
    return 0;
}
