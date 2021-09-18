#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[255];
  char temp[255];
  printf("英文を入力して下さい");
  
  while(temp !="")
    {
      gets(temp);
      printf("%s\n",temp);
      strcat(str,temp);
    }
  printf("%s",str);
      
  
  return 0;
}
