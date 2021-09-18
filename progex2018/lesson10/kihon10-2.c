#include <stdio.h>

int str_len(const char c[]);

int main(void)
{
  char c[3][256];
  int i=1;

  for(i=0;i<3;i++)
    {
      printf("%dつ文字列を入力して下さい（最大２５５文字）：",i+1);
      gets(c[i]);
    }

  for(i=0;i<3;i++)
    {

      printf("%dつめに入力された文字列は%sです。文字数は%d文字です\n",i+1,c[i], str_len(c[i]));
    }
  return 0;
}


int str_len(const char c[])
{
  int len =0;
  
  while(c[len])
    len++;

  return len;
}
