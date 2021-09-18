#include <stdio.h>

int str_copy_count(char *t, char *s);

int main(void)
{
  char str_i[256], str_o[256];
  int count;
  printf("文字列を入力して下さい（最大２５５文字）：");
  gets(str_i);

  count = str_copy_count(str_i,str_o);

  printf("コピー前の配列str_iは%sです\n",str_i);
  printf("コピー後の配列str_oは%sです\n",str_o);
  printf("コピーした文字数は%d文字です\n",count);
  return 0;
}


int str_copy_count(char *t, char *s)
{
  int i;
  while (*s++ = *t++)
    i++;
  
  return i;
}
