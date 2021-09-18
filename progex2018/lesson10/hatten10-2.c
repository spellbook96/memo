#include <stdio.h>

int lenstr(const char s[])
{
  int len=0;
  
  while( s[len])
    len++;

  return len;

}

int longest(char s[5][256])
{
  int max=0,i=0;

  for(i=0;i<5;i++)
    max=lenstr(s[max])>lenstr(s[i])?max:i;
  
  return max;
}


int main(void)
{
  int i=0;
  char s[5][256];

  for(i=0;i<5;i++)
    {
      printf("%d行目の文字列を入力してください（最大２５５文字）：",i+1);
      gets(s[i]);
    }

  printf("最も長かったのは%d行目の%sでした\n",longest(s)+1,s[longest(s)]);

  return 0;
}
