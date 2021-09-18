#include <stdio.h>

#define MAX (10)
void print_stack_ary(char *s, int top);

void push(char c, char *s, int *top);

char pop(char *s, int *top);

int main(void)
{
  char ch[MAX];int top;
  char key[2];

  top=0;
  
  while(1)
    {
      printf("１文字を入力してください：");
      scanf("%s",key);
      if(key[0]=='0')
	break;
      else if(key[0]=='1')
	{
	  printf("%cをPopした\n",  pop(ch,&top));
	  print_stack_ary(ch,top);
	}
      else
	{
	  push(key[0],ch,&top);
	  print_stack_ary(ch,top);
	}
    }


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
  s[*top]=c;
  *top=*top+1;
}

char pop(char *s, int *top)
{
  char temp;
  temp=s[*top-1];
  s[*top-1]='\0';
  *top=*top-1;

  return temp;
}
