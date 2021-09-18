#include <stdio.h>

int main(void)
{
  int num,i,j;
  i=1;
  while(1){
    printf("行数を示す正の奇数：");
    scanf("%d",&num);
    if(num<=0 ||num % 2 ==0)
      continue;
    else
      break;
  }
  
  for(i=1;i<=num;i++){
    for(j=1;j<=num;j++){
      if(j==i || j==num-i+1)
	printf("*");
      else
	printf("-");
    }
    printf("\n");
  }
  
  return 0;
}
