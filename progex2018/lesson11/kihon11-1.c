#include <stdio.h>

int main(void)
{
  int a;
  int *b;
  printf("変数aの値を入力して下さい：");
  scanf("%d",&a);
  
  b=&a;
  printf("変数aの中身の値は%dです\n変数aのアドレスは%pです\n",*b,b);

  return 0;
}
