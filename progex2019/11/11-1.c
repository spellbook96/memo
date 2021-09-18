#include <stdio.h>
#define MAXN (100)

void print_heap(int n[]);

int power(int x,int n);

int check_heap(int a[], int n);

void insert(int val, int a[], int *n);

int deletemin(int a[], int *n);

void heapsort(int a[], int n);

void heap(int a[],int n);

void swap(int a,int b,int n[]);

int main(void)
{
  int a[MAXN]={};
  FILE *fp;
  fp=fopen("numbers.dat","r"); 
  int n=0;
  while(fscanf(fp,"%d",&a[n])!=EOF)
    n++;

  print_heap(a);
  heapsort(a,n);
  print_heap(a);
  
  fclose(fp);
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

int deletemin(int a[], int *n)
{
  int temp,i;
  if(a[0]==0)
    return 0;

  temp=a[0];
  i=0;
  while(a[i+1]!=0)
    {
      a[i]=a[i+1];
      i++;
    }
  a[i]=0;
  *n=*n-1;
  return temp;
}

void heapsort(int a[], int n)
{
  int b[MAXN]={};
  int nt=0;int i;
  while(a[0]!=0)
    {
      heap(a,n);
      insert(deletemin(a,&n),b,&nt);
    }
  
  for(i=0;i<=nt;i++)
    a[i]=b[i];
}

void heap(int a[],int n)
{
  int i;
  while(check_heap(a,n)==0)
    {
      for(i=0;i<n;i++)
	{
	  if(a[i]>a[2*i+1])
	    swap(i,2*i+1,a);
	  else if(a[i]>a[2*i+2])
	    swap(i,2*i+2,a);
	}
    }
}

void swap(int a,int b,int n[])
{
  int temp;
  if(a>=0 && b>=0 && n[a] !=0 && n[b]!=0)
    {
      temp=n[a];
      n[a]=n[b];
      n[b]=temp;
    }
}
