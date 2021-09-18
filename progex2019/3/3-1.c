#include <stdio.h>
#include <ctype.h>

void *malloc(size_t size);

int main(void)
{
  char* str,*temp;
  int length;

  printf("文字列最大長さを入力してください：");
  scanf("%d",&length);

  str= malloc( sizeof(char) * length);
  temp = malloc( sizeof(char) * length);
  if(str == NULL || temp== NULL)
    puts("error");
  printf("文字列を入力してください：");
  scanf("%s",str);
  

  temp=str;
  
  
  while(*temp != '\0')
    {
      temp++;
      //   printf("%c",*temp);
    }
  while(temp != str)
    {
      temp--;

      putchar( toupper(*temp));

    }

  puts("");

  return 0;
}
