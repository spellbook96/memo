#include <stdio.h>
#define MAX (512)

double average(int array[], int size);

int main(void){
  
  int size;
  int array[MAX]={0};
  int i;

  printf("配列のサイズを入力して下さい：");
  scanf("%d",&size);
  
  for(i=0;i<size;i++){
    printf("u[%d]:",i);
    scanf("%d",&array[i]);
  }

  printf("平均は%fです。\n",average(array,size));
  
  return 0;
}


double average(int array[], int size){
  
  int i,sum;
  sum=0;
  for(i=0;i<size;i++){
    sum=sum+array[i];
  }

  return (double)sum/size;
}
