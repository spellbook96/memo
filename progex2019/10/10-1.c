#include <stdio.h>


void print_heap(int n[]);

int pow(int x,int n);

int main(void)
{
  int n[100]={1,13,14,15,24,60,63,71,80,91};

  print_heap(n);

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
      for(j=0;j<pow(2,i);j++)
	{
	  printf("%.2d " , n[count]);
	  count++;
	  if(n[count]==0)
	    break;
	}
      puts("");
    }
 
  
}

int pow(int x,int n)
{
  if(n==0)
    return 1;
  else if(n==1)
    return x;
  else
    {
      x=x*x;
      n--;
      pow(x,n);
    }
    
}
