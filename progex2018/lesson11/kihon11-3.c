#include <stdio.h>

void arrayPlus(int *a, int *b, int size);

int main(void)
{
  int n,i;
  int a[256],b[256];

  printf("ベクトルの要素数を入力して下さい（最大２５６）:");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      printf("一つ目のベクトルの%d番目の要素を入力して下さい：",i+1);
      scanf("%d",&a[i]);
      printf("%d",a[i]);
    }
  
  for(i=0;i<n;i++)
    {
      printf("二つ目のベクトルの%d番目の要素を入力して下さい：",i+1);
      scanf("%d",&b[i]);
    }
  arrayPlus(a,b,n);
  printf("二つのベクトルの和は（");
  for(i=0;i<n;i++)
    printf("%d,",a[i]);

  puts(")");
  return 0;
}

void arrayPlus(int *c, int *d, int size)
{
  int i=0;
  for(i=0;i<size;i++)
    *(c+i)+=*(d+i);
  

}
