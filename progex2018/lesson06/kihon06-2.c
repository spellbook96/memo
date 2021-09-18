#include <stdio.h>


int main(void)
{
  int a[500]={0};
  int i;
  int max=0;
  int No;
  for(i=0;i<=4;i++){
    printf("%d番目のデータ：",i);
    scanf("%d",&a[i]);
    if(max<=a[i]){
      max=a[i];
      No=i;
    }
  }
  
  printf("最大の要素は%dで、そのインデックスは%dである\n",max,No);

  return 0;
}
