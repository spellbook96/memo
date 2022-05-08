#include <stdio.h>
using namespace std;

bool compare(char a,char b)
{
    printf("? %c %c\n", a, b);
    fflush(stdout);
    char ans;
    scanf(" %c", &ans);
    return ans == '<';

}


void mymerge(char arr[], int start, int end,char res[])
{
    int mid =(start + end)/2;
    int start2 = mid+1;
    int p1 = start, p2=start2;
    int resIndex=start;
    while(p1<=mid && p2<=end)
    {
        if(compare(arr[p1],arr[p2]))
        {
            res[resIndex++] = arr[p1++];
        }
        else
        {
            res[resIndex++] = arr[p2++];
        }
    }

    while(p1<=mid)
    {
        res[resIndex++] = arr[p1++];
    }
    while(p2<=end)
    {
        res[resIndex++] = arr[p2++];
    }

    for(int i= start;i<=end;++i)
    {
        arr[i] = res[i];
    }
}
void mergeSort(char arr[],int start,int end, char res[])
{
    if(start == end) return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid,res);
    mergeSort(arr,mid+1,end,res);

    mymerge(arr,start,end,res);
}
int main()
{
    int N, Q;

    scanf("%d%d", &N, &Q);

    char *arr = new char[N];
    char *res = new char[N];
    for (int i = 0; i < N; i++)
        arr[i]= (char)('A' + i);
    

    mergeSort(arr,0,N-1,res);
    printf("! %s\n", arr);
    fflush(stdout);
    return 0;
}