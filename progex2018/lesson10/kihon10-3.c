#include <stdio.h>

int str_len(const char c[]);

int main(void)
{
  char c[3][256];
  int i=1;
  int j=0;
  for(i=0;i<2;i++)
    {
      printf("%dつ文字列を入力して下さい（最大２５５文字）：",i+1);
      gets(c[i]);
    }

  for(i=0;i<2;i++)
    {

      printf("%dめに入力された文字列は%sでした\n",i+1,c[i]);
    }


  for(i=0;i<str_len(c[0]);i++){
    c[2][i]=c[0][i];
  }

  for(i=0;i<str_len(c[1])+1;i++){

    c[2][str_len(c[0])+i]=c[1][i];
  }
  printf("連結された文字列は%sです\n",c[2]);

  return 0;
}


int str_len(const char c[])
{
  int len =0;
  
  while(c[len])
    len++;

  return len;
}
