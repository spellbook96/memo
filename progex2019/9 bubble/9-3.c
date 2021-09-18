#include <stdio.h>

int get_insertion(int n[],int a,int b);

int min(int a, int b);

int  judge_min(int a, int b);

void array_insertion(int n[],int a,int b);

void print_array10(int n[]);

void bubble_sort(int n[],int len);

int main(void)
{
  int n[10];
  FILE *fp;
  fp=fopen("numbers.dat","r"); 
  int i=0;
  while(fscanf(fp,"%d",&n[i])!=EOF)
    i++;

  print_array10(n);
  
  bubble_sort(n,10);

  print_array10(n);

  return 0;
}

int get_insertion(int n[],int a,int b)
{
  int i;
  for(i=a;i<b;i++)
    if(judge_min(n[b],n[i])==1)
      return i;

  return -1;
  
}

int min(int a, int b)
{
  return a<b ? a:b;
}

int  judge_min(int a, int b)
{
  return a<b ? 1 : 0;
}

void array_insertion(int n[],int a,int b)
{
  int temp,i;
  temp=n[a];
  
  for(i=a;i>b;i--)
    n[i]=n[i-1];

  n[b]=temp;
}

void print_array10(int n[])
{
  int i;
  for(i=0;i<10;i++)
    printf("%d ",n[i]);
  puts("");
}

void bubble_sort(int n[],int len)
{
  int i,j,temp;
  for(i=len;i>0;i--)
    {
      for(j=0;j<i;j++)
	{
	  if(judge_min(n[j+1],n[j])==1)
	    {
	      temp=n[j];
	      n[j]=n[j+1];
	      n[j+1]=temp;
	    }
	}
    }
}
