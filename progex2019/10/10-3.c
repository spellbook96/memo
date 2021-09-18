#include <stdio.h>


void print_heap(int n[]);

int power(int x,int n);

int check_heap(int a[], int n);

void insert(int val, int a[], int *n);

int main(void)
{
  int s[100]={};
  int n=0;
  int temp;
  // printf("%d",power(2,5));
  while(1)
    {
      printf("実数を入力してください：");
      scanf("%d",&temp);
      insert(temp,s,&n);
      print_heap(s);
      printf("check_heap = %d\n",check_heap(s,n));
    }
  return 0;
}


void print_heap(int n[])
{
  int height=0;
  int i=0,j=0,count=0,temp;
  while(n[i]!=0)
    {
      height++;
      i=2*i+1;
    }
  i=0;
  //  printf("%d\n",height);
  for(i=0;i<height;i++)
    {
      for(j=0;j<power(2,i);j++)
	{
	  printf("%.2d " , n[count]);
	  count++;
	  if(n[count]==0)
	    break;
	}
      puts("");
    }
 
  
}

int power(int x,int n)
{
  int temp;
  temp=x;
  int i;
  if(n==0)
    return 1;
  else if(n==1)
    return x;
  else
    {
      for(i=n-1;i>0;i--)
	temp=temp*x;
    }
    
}

int check_heap(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      if(a[2*i+1]==0 && a[2*i+2] ==0)
	return 1;
      else if(a[2*i+2]==0)
	{
	  if(a[i]>a[2*i+1])
	    return 0;
	}
      else if((a[i]>a[2*i+1]||a[i]>a[2*i+2]))
	return 0;
    }
  return 1;
}

void insert(int val, int a[], int *n)
{
 a[*n]=val;
 *n=*n+1;
}
