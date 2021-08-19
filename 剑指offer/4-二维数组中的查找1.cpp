#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::endl;

bool Find(int target, vector<vector<int>> array)
{
    int rows = array.size();
    int cols = array[0].size();


    for (int j= cols-1;j>=0;--j)
    {
        if(array[0][j]==target)
            return true;
        if(array[0][j]<target)
        {
            for(int i=0; i<rows;++i)
            {
                if(array[i][j]==target)
                    return true;
                if(array[i][j]>target)
                    for(int k = j-1; k>=0;--k)
                        if(array[i][k]==target)
                            return true;
            }
            return false;
        }
    }
    return false;
}

int main()
{
    int m = 4; int n =4;
    vector<vector<int> >array(m,vector<int>(n,0));

    // for (int i=0;i<m;++i)
    // {
    //     array[i].resize(n);
    // }
    array[0]={1,2,8,9};
    array[1]={2,4,9,12};
    array[2]={4,7,10,13};
    array[3]={6,8,11,15};
    cout << Find(1,array) << endl;
    return 0;   
}