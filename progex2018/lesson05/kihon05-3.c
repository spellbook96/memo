#include <stdio.h>

int main(void)
{
  int num,i,temp1,temp2;
  printf("正の整数：");
  scanf("%d",&num);
  temp1=1;
  temp2=1;
  i=1;
  if(num<=0)
    puts("正の整数ではありません");
  else{
    printf("1\n1\n");
    while(i<=num){
      temp1=i;
      i=temp1+temp2;
      temp2=temp1;
      if(i<=num)
      printf("%d\n",i);
    }
  }
  return 0;
}
