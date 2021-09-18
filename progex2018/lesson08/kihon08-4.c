#include <stdio.h>
#include <math.h>

#define MAX 512

double innerproduct(int [], int [],int);

double norm(int array[], int size);
  
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
  do{
    for(i=0;i<size;i++){
      printf("ベクトルxの%d番名の要素：",i);
      scanf("%d",&array1[i]);
    }
    if(norm(array1,size)==0)
      printf("絶対値が０です。もう一度入力してください\n");
    else
      break;
  }while(2);

  do{
    for(i=0;i<size;i++){
      printf("ベクトルyの%d番名の要素：",i);
      scanf("%d",&array2[i]);
    }
    if(norm(array2,size)==0)
      printf("絶対値が０です。もう一度入力してください\n");
    else
      break;
  }while(2);

  printf("ベクトルのx、yのなす角の余弦は%fです\n",innerproduct(array1,array2,size)/(norm(array1,size)*norm(array2,size)));
  return 0;
}


double innerproduct(int array1[], int array2[], int size){
  int i;
  double temp=0;
  double sum;
  sum=0;
  
  for(i=0;i<size;i++){
    temp=array1[i]*array2[i];
    sum=sum+temp;
    
  }
  return sum;
}


double norm(int array[], int size){
  int i,sum,temp;
  sum=0;
  for(i=0;i<size;i++){
    temp=array[i]*array[i];
    sum=sum+temp;
  }

  return sqrt(sum);
}
