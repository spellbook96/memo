#include <stdio.h>
#include <stdlib.h>

struct data{
  char key;
  struct data *next;
};

void push(struct data **top,char key);

char pop(struct data **top);

void print_stack_list(struct data *top);

struct data *add_stack_list(struct data *top, char a);

int main(void)
{
  struct data *top;
  char key;

  top=NULL;

  push(&top,'a');
  print_stack_list(top);
  push(&top,'b');
  print_stack_list(top);
  push(&top,'c');
  print_stack_list(top);
  push(&top,'d');  
  print_stack_list(top);

  printf("POP %c\n",pop(&top));
  print_stack_list(top);
  printf("POP %c\n",pop(&top));
  print_stack_list(top);
  printf("POP %c\n",pop(&top));
  print_stack_list(top);
  printf("POP %c\n",pop(&top));
  print_stack_list(top);

  free(top);
  return 0;
}

void print_stack_list(struct data *top)
{
  if(top==NULL)
    printf("空\n");
  else 
    {
      printf("%c\n",top->key);
      if(top->next!=NULL)
	print_stack_list(top->next);
    }
}

struct data *add_stack_list(struct data *top, char a)
{
  struct data *new,*temp;
  new=  (struct data *)malloc(sizeof(struct data));
  temp=NULL;
  temp=top;
  
  new->key=a;
  top=new;
  top->next=temp;
  return top;
}

void push(struct data **top,char key)
{
  struct data *temp;
  printf("PUSH %c\n",key);
  if(*top==NULL)
    {
      *top=  (struct data *)malloc(sizeof(struct data));
      (*top)->next=NULL;
      (*top)->key = key;
    }
  else
    {
      temp=*top;
      *top= (struct data *)malloc(sizeof(struct data));
      (*top)->key=key;
      (*top)->next = temp;
    }
}

char pop(struct data **top)
{
  char c;
  if(*top==NULL)
    return '\0';
  else
    {
      c=(*top)->key;
      if((*top)->next!=NULL)
	*top=(*top)->next;
      else 
	*top=NULL;
    }
  return c;
}
