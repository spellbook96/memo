#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    using namespace std;

    int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    //using pointers
    for (int(*p)[4] = begin(ia); p != end(ia); ++p)
    {
        for (int *q = begin(*p); q != end(*p);q++)
        {
            cout << *q <<" ";
        }
    }

    cout << endl;

    // range for
    for (int (&row)[4] : ia)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
    }
    cout <<endl;
    
    // for loop
    for (size_t i=0;i < 3;i++)
    {
        for (size_t j=0;j<4;j++)
        {
            cout << ia[i][j] << " ";
        }
    }
    cout <<endl;
    return 0;
}
