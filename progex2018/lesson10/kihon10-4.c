#include <stdio.h>
#include <ctype.h>

void count_chars(char [], int []);

void str_toupper(char s[]);

int main(void)
{
  char c[256]={0};
  int cnt[26]={0};
  int i=0;

  printf("文字列小入力してください（最大２５５文字）：");
  gets(c);

  str_toupper(c);
 
  count_chars(c,cnt);

  for(i=0;i<26;i++)
    {
      if(cnt[i]!=0)
	printf("%cは%d文字ありました\n",i+0x41,cnt[i]);
    }
  return 0;
}


void count_chars(char str[], int cnt[])
{
  int i= 0;

  while (str[i])
    {
      if(str[i] >='A' && str[i] <= 'Z')
	cnt[str[i]-'A']++;
      i++;
    }

}



void str_toupper(char c[])
{
  int i=0;
  while(c[i])
    {
      c[i] = toupper( c[i] );
      i++;
    }
}
