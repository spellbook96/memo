#include <stdio.h>          

int main(void)
{
  int s;                  

  printf("点数（１００点満点）：");
  scanf("%d",&s);    
  
  if ( s>100 || s<0 ) 
    printf("入力エラーです\n");
  else if ( s>=90 )
		printf("あなたの評価値はA+です\n"); 
  else if ( s>=80 )
		printf("あなたの評価値はAです\n");  
  else if (s>=70 )
		printf("あなたの評価値はBです\n"); 
  else if (s>=60 )
    printf("あなたの評価値はCです\n");
  
	else
		printf("あなたの評価値はFです\n");

  return 0;
}
