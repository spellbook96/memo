#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::endl;

bool Find(int target, vector<vector<int>> array)
{
    int rows = array.size();
    int cols = array[0].size();

    int row = 0; int col = cols-1;
    while(row<rows && col >=0)
    {
        if(array[row][col]==target)
        {
            return true;
        }
        else if(array[row][col]>target)
            --col;
        else
            ++row;
    }
    return false;
}

int main()
{
    int m = 4; int n =4;
    vector<vector<int> >array(m);

    for (int i=0;i<m;++i)
    {
        array[i].resize(n);
    }
    array[0]={1,2,8,9};
    array[1]={2,4,9,12};
    array[2]={4,7,10,13};
    array[3]={6,8,11,15};
    cout << Find(7,array) << endl;
    return 0;
}