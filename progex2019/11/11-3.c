#include <stdio.h>
#define MAXN (100)

int find_median3(int left, int right,int a[]);

int partition(int left, int right, int q,int a[]);

void quicksort(int left, int right, int a[]);

void insertionsort(int p,int q, int a[]);

void print_array10(int n[]);

void swap(int a, int b, int n[]);
  
int main(void)
{
  int a[MAXN]={};
  FILE *fp;
  fp=fopen("numbers.dat","r"); 
  int n=1;
  while(fscanf(fp,"%d",&a[n])!=EOF)
    n++;

  a[0]= -999999999;
  
  quicksort(1,n,a);
  
  print_array10(a);
  
  return 0;
}

void quicksort(int left, int right, int a[])
{
  int cutoff,pivot,i,j;

  cutoff = 10;
  if((right-left) < cutoff)
    insertionsort(left,right,a);
  else
    {
      pivot = find_median3(left,right,a);
      i = partition(left, right , pivot,a);
      quicksort(left,i-1,a);
      quicksort(i+1,right,a);
    }
}

int partition(int left, int right, int q, int a[])
{
  int i,j;

  i= left - 1;
  j= right;

  do{
    do i++; while(a[i] < q);
    do j--; while(a[j] > q);
    if(i < j)
      swap(i,j,a);
  }while(i < j);

  swap(i, right,a);
  return(i);
}

int find_median3(int left,int right,int a[])
{
  int center, p;

  center = (left + right)/2;
  if(a[left] > a[center])
    swap(left,center,a);
  if(a[left] > a[right])
    swap(left,right,a);
  if(a[center] > a[right])
    swap(center,right,a);

  p=a[center];
  swap(center,right,a);
  return(p);
}

void swap(int a, int b, int n[])
{
  int temp=n[a];
  n[a]=n[b];
  n[b]=temp;
    
}

void insertionsort(int p,int q, int a[])
{
  int i,j,c;

  for(j = p+1; j<=q;j++)
    {
      c = a[j];
      i=j;
      while( i>p && a[i-1] >c)
	{
	  a[i] = a[i-1];
	  i--;
	}
      a[i]=c;
    }
}

void print_array10(int n[])
{
  int i;
  for(i=2;i<=11;i++)
    printf("%d ",n[i]);
  puts("");
}
