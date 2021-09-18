#include <stdio.h>

int lenstr(const char s[])
{
  int len=0;
  
  while( s[len])
    len++;

  return len;

}



int main(void)
{
  int i=0,len=0;
  char in_str[256];
  char out_str[256];  

  printf("文字列を入力して下さい（最大２５５文字）：");
  gets(in_str);

  len=lenstr(in_str);


  for(i=0;i<=len-1;i++)
    out_str[i]=in_str[len-i-1];

  printf("%sを逆順にすると%sです\n",in_str,out_str);



  return 0;
}
  
