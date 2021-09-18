#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
  int x, y;
  printf("二つの整数値を入力してください：");
  scanf("%d %d",&x,&y);
  
  printf("変数xの値は%d、変数yの値は%dです。\n",x,y);
  
  swap(&x,&y);
  printf("swap()を呼び出した後の変数xの値は%d,変数yの値は=%dです。\n",x,y);


  return 0;
}


void swap(int* x,  int* y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
