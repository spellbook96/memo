#include <stdio.h>

int main(void)
{
  int num,i,j;
  printf("正の整数：");
  scanf("%d",&num);
  if(num<=0)
    puts("正の整数ではありません");
  else{
    for(i=1;i<=num;i++){
      for(j=1;j<=num+i-1;j++){
	if(j<=num-i)
	  printf(" ");
	else
	  printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
