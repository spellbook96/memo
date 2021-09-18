#include <stdio.h>

#define NUM (5)

int main(void){
  
  int i;
  int a[NUM]={3,1,4,1,5};

  for(i=0;i<NUM;i++){
    printf("%d番目の数字：%d\n",i,a[i]);
  }

  for(i=0;i<NUM;i++){
    printf("%d番目の数字：",i);
    scanf("%d",&a[i]);
  }
  
  for(i=NUM-1;i>=0;i--){
    printf("%d番目の数字：%d\n",i,a[i]);
  }

  return 0;
}
