#include <stdio.h>

int main(void)
{
  int n,i,j;
  printf("３以上の整数：");
  scanf("%d",&n);
  j=1;
  for(i=2;i<=n-1;i++){
    if(n % i ==0){
      j=0;
      break;
    }
  }
  if(j==0)
    printf("%dは素数ではありません\n",n);
  else
    printf("%dは素数です\n",n);
  return 0;
}
