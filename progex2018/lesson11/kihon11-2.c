#include <stdio.h>

void sort(int *left, int *right);

int main(void)
{
  int a;
  int b;;
  printf("最初の数字をを入力して下さい：");
  scanf("%d",&a);
  
  printf("二つめの数字をを入力して下さい：");
  scanf("%d",&b);

  sort(&a,&b);
  printf("大きい数字は%dです\n",a);

  return 0;
}

void sort(int *left, int *right)
{
  int temp=0;
  if(*right> *left)
    {
      temp=*right;
      *right=*left;
      *left=temp;
    }
  
}
