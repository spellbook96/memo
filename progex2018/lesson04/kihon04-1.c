#include <stdio.h>             

int main(void){
  double m=0;
  double kg=0;
  double std=9;
  
  printf("身長：");
  scanf("%lf",&m);

  printf("体重:");
  scanf("%lf",&kg);

  std =(m - 100) * 0.9;
  
  printf("標準体重は%.1fです\n",std);
  if(kg - std > 8)
    puts("少し太っています");

  return 0;
}
  
