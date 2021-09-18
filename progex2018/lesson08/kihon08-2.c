#include <stdio.h>
#include <math.h>
#define MAX 512

double norm(int array[], int size);

int main(void){
  
  int i=0;
  int array[MAX];
  int size;
  do{
  printf("ベクトルの要素数は？(最大５１２）：");
  scanf("%d",&size);
  if(size>=1 && size<=512){
    i=1;
    break;
  }
  
  } while(2);

  for(i=0;i<size;i++){
    printf("%d番名の要素：",i);
    scanf("%d",&array[i]);
  }
  
  printf("このベクトルの絶対値は%fです\n",norm(array,size));
  
  return 0;
}


double norm(int array[], int size){
  int i,temp;
  double sum,x;
  sum=0;
  for(i=0;i<size;i++){
    temp=array[i]*array[i];
    sum=sum+temp;
  }

  x=sqrt(sum);
  return x;
}
