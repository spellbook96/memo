#include <stdio.h>

int array_No_min(int n[],int a,int b);

int min(int a,int b);

void array_swap(int n[],int a,int b);

int main(void)
{
  int n[10];
  FILE *fp;
  fp=fopen("numbers.dat","r"); 
  int i=0;
  while(fscanf(fp,"%d",&n[i])!=EOF)
    i++;

  for(i=0;i<10;i++)
    {
      array_swap(n,array_No_min(n,i,9),i);
      printf("%d ",n[i]);
    }  
	 
  puts("");
  return 0;
}

int array_No_min(int n[],int a,int b)
{
  if(a==b)
    return a;
  int i;
  int j=a;
  int temp;
  temp=n[a];
  for(i=a+1;i<=b;i++)
    {
      temp=min(temp,n[i]);
      if(temp==n[i])
	j=i;
    }
  return j;
}

int min(int a, int b)
{
  return a<b ? a :b; 
}

void array_swap(int n[],int a,int b)
{
  int temp;
  if(a!=b){
    temp=n[b];
    n[b]=n[a];
    n[a]=temp;
  }
}
