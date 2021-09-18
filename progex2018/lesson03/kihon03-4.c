#include<stdio.h>

int main(void)
{
  int i=0;
  double d=0;
  i=(int)((683-119)*(8+21)/41);
  d=(double)(683-119)*(8+21)/41;
  printf("整数型で計算すると(683-119)*(8+21)/41)= %d\n",i);
  printf("倍精度浮動小数点型で計算すると(683-119)*(8+21)/41)= %f\n",d);
  return 0;
}
