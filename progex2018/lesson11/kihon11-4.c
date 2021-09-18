#include <stdio.h>

void cal(int *x, int *y, int type);

int main(void)
{
  int x,y,type;

  printf("最初の数字を入力して下さい：");
  scanf("%d",&x);
 
  do
    {
  puts("どの四則演算を行うか入力して下さい");
  printf("１：加算、２：減算、３：乗算、４：整数の除算、５：計算終了：");
  scanf("%d",&type);
  if(type==5)
    break;
  cal(&x,&y,type);
  printf("計算結果は%dです\n",x);
    }while(2);

  puts("終了します");
  return 0;
}

void cal(int *x, int *y, int type)
{
  switch(type)
    {
    case 1:
      printf("%d+?の?は：",*x);
      scanf("%d",y);
      *x=(*x)+(*y);
      printf("x");
      break;
    case 2:
      printf("%d-?の?は：",*x);
      scanf("%d",y);
      *x=(*x)-(*y);
      break;
    
    case 3:
      printf("%d*?の?は：",*x);
      scanf("%d",y);
      *x=(*x)*(*y);
      break;
    
    case 4:
      printf("%d/?の?は：",*x);
      scanf("%d",y);
      *x=(*x)/(*y);
      break;
    
    }
}
