#include <stdio.h>

#define MAX (10)
void print_stack_ary(char *s, int top);

void push(char c, char *s, int *top);

int main(void)
{
  char ch[MAX];int top;

  ch[0]='a';
  ch[1]='b';
  ch[2]='c';
  ch[3]='d';
  top=4;
  print_stack_ary(ch,top);

  puts("");

  push('e',ch,&top);
  print_stack_ary(ch,top);

  return 0;
}

void print_stack_ary(char *s, int top)
{
  int i;
  printf("<---TOP=%d\n",top);
  for(i=top;i>0;i--)
    printf("%c\n",s[i-1]);
}

void push(char c, char *s, int *top)
{
  printf("Push  %c\n",c);
  *top=*top+1;
  s[*top-1]=c;
}
