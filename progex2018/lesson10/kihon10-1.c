#include <stdio.h>

int str_len(const char c[]);

int main(void)
{
  char c[256];
  printf("文字列を入力して下さい（最大２５５文字）：");
  gets(c);

  printf("入力された文字列は%sです。文字数は%d文字です\n",c, str_len(c));

  return 0;
}


int str_len(const char c[])
{
  int len =0;
  
  while(c[len])
    len++;

  return len;
}
