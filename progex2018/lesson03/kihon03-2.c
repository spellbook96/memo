#include<stdio.h>

int main(void)
{
  double x,y=0;
  printf("浮動小数点数を入力して下さい：");
  scanf("%lf",&x);
  printf("浮動小数点数を入力して下さい：");
  scanf("%lf",&y);
  
  printf("%fと%fの績は%fです\n",x,y,x * y);
  return 0;
}
