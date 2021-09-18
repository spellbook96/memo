#include <stdio.h>

#define MAX (10)
void print_stack_ary(char *s, int top);

void push(char c, char *s, int *top);

char pop(char *s, int *top);

int search_del(int *top,char key,char *s1);

int main(void)
{
  char ch[MAX],temp[MAX]; int top,top2;
  char key[2];

  top=0;top2=0;
  
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
	  if(search_del(&top,key[0],ch)==0)	    
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

int search_del(int *top,char key,char *s1)
{
  int top2=0;
  int top1=*top;
  char s2[MAX];
  char temp;
  while(top1>0)
    {
      temp=pop(s1,&top1);
      if(temp==key)
	{
	  while(top2>0)	    
	    push(pop(s2,&top2),s1,&top1);
	  *top=*top-1;
	  return 1;
	}
      
      push(temp,s2,&top2);
      
    }
  while(top2>0)	    
    push(pop(s2,&top2),s1,&top1);
  return 0;
}
