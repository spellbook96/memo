#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

int selection(void);
//選択法
void selection_sort(int *a,int n);
int array_No_min(int n[],int a,int b);
int min(int a,int b);
void array_swap(int n[],int a,int b);
//
//挿入法
void insertion_sort(int n[],int max);
int get_insertion(int n[],int a,int b);
int  judge_min(int a, int b);
void array_insertion(int n[],int a,int b);
//
//ヒープソート
void heap_sort(int *a,int n);
void heap(int a[],int n);
void swap(int a,int b,int n[]);
int power(int x,int n);
int check_heap(int a[], int n);
void insert(int val, int a[], int *n);
int deletemin(int a[], int *n);
//
//クイックソート
void quick_sort(int a[],int n);
int find_median3(int left, int right,int a[]);
int partition(int left, int right, int q,int a[]);
void quicksort(int left, int right, int a[]);
void insertionsort(int p,int q, int a[]);
//

int main(void)
{
  int s,temp,n,i,s2;
  int *a;
  FILE *fp;
  struct timeval start,end;
  
  while(s=!0)
    {
      puts("1.number1K.dat");
      puts("2.number10K.dat");
      puts("3.number100K.dat");
      printf("ファイルを選択してください：");
      scanf("%d",&s);
      if(s==1)
	{
	  while(s2!=0)
	    {
	      fp=fopen("numbers1K.dat","r");
	      fscanf(fp,"%d",&n);
	      a=(int*)malloc(sizeof(int)*n*2);
	      i=0;
	      
	      while(fscanf(fp,"%d",&a[i])!=EOF)
		i++;
	      
	      s2=selection();
	      if(s2==1)
		selection_sort(a,n);
	      else if(s2==2)
		insertion_sort(a,n);
	      else if(s2==3)
		{
		  for(i=n;i<2*n;i++)
		    a[i]=0;
		  heap_sort(a,n);
		}
	      else if(s2==4)
		quick_sort(a,n);
	    }
	  s2=10;
	  //	  break;
	}
      else if(s==2)
	{
	  while(s2!=0)
	    {
	      fp=fopen("numbers10K.dat","r");
	      fscanf(fp,"%d",&n);
	      a=(int*)malloc(sizeof(int)*n*2);
	      i=0;
	      
	      while(fscanf(fp,"%d",&a[i])!=EOF)
		i++;
	      
	      s2=selection();
	      if(s2==1)
		selection_sort(a,n);
	      else if(s2==2)
		insertion_sort(a,n);
	      else if(s2==3)
		{
		  for(i=n;i<2*n;i++)
		    a[i]=0;
		  heap_sort(a,n);
		}
	      else if(s2==4)
		quick_sort(a,n);
	    }
	  s2=10;
	  //	  break;
	}
      else if(s==3)
	{
	  while(s2!=0)
	    {
	      fp=fopen("numbers100K.dat","r");
	      fscanf(fp,"%d",&n);
	      a=(int*)malloc(sizeof(int)*n*2);
	      i=0;
	      
	      while(fscanf(fp,"%d",&a[i])!=EOF)
		i++;
	      
	      s2=selection();
	      if(s2==1)
		selection_sort(a,n);
	      else if(s2==2)
		insertion_sort(a,n);
	      else if(s2==3)
		{
		  for(i=n;i<2*n;i++)
		    a[i]=0;
		  heap_sort(a,n);
		}
	      else if(s2==4)
		quick_sort(a,n);
	    }
	  s2=10;
	  //  break;
	}
    }
  free(a);
  return 0;
  
}

int selection(void)
{
  int temp;
  puts("1.選択法");
  puts("2.挿入法");
  puts("3.ヒープソート");
  puts("4.クイックソート");
  printf("ソート方法を選択してください：");
  
  scanf("%d",&temp);
  return temp;
}

//選択法
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

void selection_sort(int *a,int n)
{
  struct timeval start,end;
  unsigned long long time_sec,time_us;
  int i;

  gettimeofday(&start,NULL);
  for(i=0;i<n;i++)
    array_swap(a,array_No_min(a,i,n-1),i);

  gettimeofday(&end,NULL);
  time_sec= end.tv_sec - start.tv_sec;
  time_us = end.tv_usec - start.tv_usec;
  
  for(i=0;i<n;i++)
    printf("%d",a[i]);
  puts("");
  puts("---------------------------------");
  printf("選択法の処理時間:%lld(sec)%lld(us)\n",time_sec,time_us);
  puts("---------------------------------");
	  
}
//

//挿入法
void insertion_sort(int n[],int max)
{
  struct timeval start,end;
  unsigned long long time_sec,time_us;
  int i;
  gettimeofday(&start,NULL);
  
  for(i=1;i<max;i++)
    {
      //    printf("STEP%d:",i);
      if (get_insertion(n,0,i)!=(-1)){
	//	printf("n[%d]をn[%d]の前に挿入する\n",i,get_insertion(n,0,i));
	array_insertion(n,i,get_insertion(n,0,i));
      }
    }
  gettimeofday(&end,NULL);
  time_sec= end.tv_sec - start.tv_sec;
  time_us = end.tv_usec - start.tv_usec;
  
  for(i=0;i<max;i++)
    printf("%d\n",n[i]);
  
  puts("");
  puts("---------------------------------");
  printf("挿入法の処理時間:%lld(sec)%lld(us)\n",time_sec,time_us);
  puts("---------------------------------");

  puts("");

}
int get_insertion(int n[],int a,int b)
{
  int i;
  for(i=a;i<b;i++)
    if(judge_min(n[b],n[i])==1)
      return i;
  
  return -1;
  
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

//

//ヒープソート

void heap_sort(int *a, int n)
{
  struct timeval start,end;
  unsigned long long time_sec,time_us;
  int i,temp;
  int b[2*n];
  int nt=0;

  temp=n;
  gettimeofday(&start,NULL);

  while(a[0]!=0)
    {
      heap(a,n);
      insert(deletemin(a,&n),b,&nt);
    }
  
  //for(i=0;i<=nt;i++)
  //   a[i]=b[i];
  gettimeofday(&end,NULL);
  time_sec= end.tv_sec - start.tv_sec;
  time_us = end.tv_usec - start.tv_usec;

  n=temp;
  for(i=0;i<n;i++)
    printf("%d\n",b[i]);
  
  puts("");
  puts("---------------------------------");
  printf("ヒープソートの処理時間:%lld(sec)%lld(us)\n",time_sec,time_us);
  puts("---------------------------------");

  puts("");

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
//

//クイックソート

void quick_sort(int a[],int n)
{
  struct timeval start,end;
  unsigned long long time_sec,time_us;
  int i;
  gettimeofday(&start,NULL);
  
  a[0]=-99999999;
  quicksort(1,n-1,a);

  gettimeofday(&end,NULL);
  time_sec= end.tv_sec - start.tv_sec;
  time_us = end.tv_usec - start.tv_usec;

  for(i=1;i<n;i++)
    printf("%d\n",a[i]);
  
  puts("");
  puts("---------------------------------");
  printf("クイックソートの処理時間:%lld(sec)%lld(us)\n",time_sec,time_us);
  puts("---------------------------------");

  puts("");
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
//
