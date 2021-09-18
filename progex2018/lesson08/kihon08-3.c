#include <stdio.h>

#define MAX 512

double innerproduct(int [], int [],int);

int main(void){
  int array1[MAX]={0};
  int array2[MAX]={0};
  int i;
  int size;
  
  do{
    printf("ベクトルの要素数は？(最大５１２）：");
    scanf("%d",&size);
    if(size<1 ||size>512){
      printf("要素数は５１２以下にして下さい\n");
      continue;
    }
    break;
  }while(2);
  
  for(i=0;i<size;i++){
    printf("ベクトルxの%d番名の要素：",i);
    scanf("%d",&array1[i]);
  }

  for(i=0;i<size;i++){
    printf("ベクトルyの%d番名の要素：",i);
    scanf("%d",&array2[i]);
  }

  printf("ベクトルのx、yの内積は%.0fです\n",innerproduct(array1,array2,size));
  return 0;
}


double innerproduct(int array1[], int array2[], int size){
  int i;
  double temp=0;
  double sum=0;
  for(i=0;i<size;i++){
    temp=array1[i]*array2[i];
    sum=sum+temp;
    
  }
  return sum;
}
