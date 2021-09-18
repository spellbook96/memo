#include <stdio.h>

#define MAX (4)
void print_stack_ary(char *s, int top);

int main(void)
{
  char ch[MAX];int top=MAX-1;

  ch[0]='a';
  ch[1]='b';
  ch[2]='c';
  ch[3]='d';

  puts("<---TOP=4");
  print_stack_ary(ch,top);
  return 0;
}

void print_stack_ary(char *s, int top)
{
  int i;
  for(i=top;i>=0;i--)
    printf("%c\n",s[i]);
}
