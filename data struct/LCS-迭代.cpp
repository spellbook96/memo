#include <iostream>
#include <string>

using std::string; using std::cout; using std::endl;
int LCS(string str1, string str2)
{
    int result[str1.size()][str2.size()] = {};
    for (int row = 0; row < str1.size(); ++row)
    {
       for (int col = 0 ; col < str2.size(); ++col)
       {
            if(row==0)   //处理边界问题
            {
                if(col!=0)
                    result[row][col] = result[row][col-1];
            }
            else if(col==0)
                result[row][col] = result[row-1][0];
            else
                {
                    if(result[row-1][col] > result[row][col-1])
                        result[row][col] = result[row-1][col];
                    else
                        result[row][col] = result[row][col-1];
                }
            if(str1[row] == str2[col])
                ++result[row][col];
       }
    }
    return result[str1.size()-1][str2.size()-1];
}

int main()
{
    // string str1 = "educational";
    // string str2 = "";
    
    string str1 = "educational";
    string str2 = "advantage";
    cout << LCS(str1,str2) << endl;
    return 0;
}