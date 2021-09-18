#include <stdio.h>
#define MAXN (100)

void mergesort(int p,int q,int a[]);

void merge(int p, int q,int min, int a[]);

void print_array10(int n[]);
  
int main(void)
{
  int a[MAXN]={};
  FILE *fp;
  fp=fopen("numbers.dat","r"); 
  int n=1;
  while(fscanf(fp,"%d",&a[n])!=EOF)
    n++;

  n=n-1;
  mergesort(1,n,a);
  
  print_array10(a);
  
  return 0;
}

void mergesort(int p,int q,int a[])
{
  int mid;
  if (p<q)
    {
      mid = (p+q)/2;
      mergesort(p,mid,a);
      mergesort(mid+1,q,a);
      merge(p,q,mid,a);
    }
}


void merge(int p, int q,int min, int a[])
{
  int k,i,j;
  int b[MAXN]={};
  i=p;j=min+1;
  printf("merge: p=%d q=%d min=%d\n",p,q,min);
  for(k=p;k<=q;k++)
    {
      if(((a[i]<=a[j])&&(i<=min) )|| j>q)
	{
	  b[k]=a[i];
	  i++;
	}
      else
	{
	  b[k]=a[j];
	  j++;
	}
    }
  for(i=p;i<=q;i++)
    a[i]=b[i];
  print_array10(a);
	
}

void print_array10(int n[])
{
  int i;
  for(i=1;i<=10;i++)
    printf("%d ",n[i]);
  puts("");
}
