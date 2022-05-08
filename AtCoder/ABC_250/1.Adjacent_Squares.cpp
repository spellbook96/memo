#include <stdio.h>
#include <iostream>
using namespace std;
int solution()
{
    int m,n,x,y;
    scanf("%d %d",&m,&n);
    scanf("%d %d",&y,&x);
    if(m==1)
    {
        if(n==1)
            return 0;
        else 
        {
            if(x==1 || x==n)
                return 1;
            else
                return 2;
        }
    }
    else if(n==1)
    {
        if(y==1 || y==m)
            return 1;
        else 
            return 2;
    }

    if((x==1 &&y==1) ||(x==1 && y==m) ||(x==n && y==1) ||(x==n && y==m))
        return 2;
    else if(x>1 && x<n && y>1 && y<m)
        return 4;
    else
        return 3;
}
int main()
{
    cout << solution() <<endl;
    return 0;
}