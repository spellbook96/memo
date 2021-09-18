#include <stdio.h>           

int main(void)
{
  int s;                      

  printf("何月ですか：");
  scanf("%d",&s);   
  
  if ( s<1 || s>12 ) 
    printf("そんな月はありませんよ！！\n");
  else if ( s>=3 && s<=5 )
		printf("春です\n"); 
  else if ( s>=6 && s<=8 )
		printf("夏です\n");  
  else if (s>=9 && s<=11 )
		printf("秋です\n"); 
  else 
    printf("冬です\n");
  

  return 0;
}
