#include <stdio.h>
#include<stdlib.h>

void swap(int *px, int *py)
{
  int temp = *px;
  *px = *py;
  *py = temp;
}

int main(int argc, char *argv[])
{
  int na, nb;
  
  na=atoi(argv[1]);
  nb=atoi(argv[2]);

  printf("入力された二つの整数は　A＝%d と　B＝%d です\n",na,nb);

  swap(&na,&nb);

  puts("これらの値を交換しました");
  printf("二つの正位数は　A＝%d と　B＝%d です　\n",na,nb);

  return 0;
}
