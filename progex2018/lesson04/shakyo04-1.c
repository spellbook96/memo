#include<stdio.h>

int main(void){
  int num;

  printf("正の整数を入力して下さい：");
  scanf("%d",&num);

  if(num % 2 == 0)
    puts("その数は偶数です");
  else
    puts("その数は奇数です");
  
  return 0;
}
