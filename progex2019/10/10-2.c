#include <stdio.h>


void print_heap(int n[]);

int power(int x,int n);

int check_heap(int a[], int n);

int main(void)
{
  int n[100]={1,13,14,15,24,60,63,71,80,91};

  print_heap(n);

  printf("check_heap = %d\n",check_heap(n,10));
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
  if(n==0)
    return 1;
  else if(n==1)
    return x;
  else
    {
      x=x*x;
      n--;
      power(x,n);
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
