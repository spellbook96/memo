#include <stdio.h>

int main(void)
{
  int i, no;
  
  printf("正の整数を入力して下さい：");
  scanf("%d", &no);

  for (i= 0;i<= no;i++)
    printf("%d",i);
  printf("\n");
  
  return 0;
}
