#include<stdio.h>
#include<math.h>
#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    int m=100;
    int n=100;
    bool **visited = new bool*[m];
    cout << "123" << endl;
    for(int i=0; i<m;++i)
    {
        cout << sizeof(visited[i]) << endl;
        visited[i] = new bool[n];
        memset(visited[i],false,sizeof(visited[i]));
    }
    
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
            cout << visited[i][j] << " ";
        
        cout << endl;
    }

    return 0;
}