
#include <stdio.h>

int main(void)
{
  int num;

  printf("整数を入力して下さい：");
  scanf("%d",&num);

  printf("その数の3倍は%dです\n", 3 * num);
  
  return 0;
}
