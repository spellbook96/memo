#include <stdio.h>

int my_sum(int);

int main(void){
  int max;
  int sum;

  printf("正の整数を入力して下さい：");
  scanf("%d",&max);

  sum=my_sum(max);

  printf("1から%dまでを足した値は%dです\n",max,sum);

  return 0;

}

int my_sum(int n){
  int s=0;
  do{
    s+=n;
  }while( --n > 0 );

  return s;
}
