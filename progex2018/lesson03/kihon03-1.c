#include<stdio.h>

int main(void)
{
  int a,b=0;
  printf("整数を入力して下さい：");
  scanf("%d",&a);
  printf("整数を入力して下さい；");
  scanf("%d",&b);
  
  printf("%d割る%dの商は%.f、%d割る%dの余りは%.fです\n",a,b,(double)(a/b),a,b,(double)(a%b));
  return 0;
}
  
