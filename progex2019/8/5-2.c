#include <stdio.h>
#include <stdlib.h>

struct data{
  char key;
  struct data *next;
};

void print_stack_list(struct data *top);

struct data *add_stack_list(struct data *top, char a);

int main(void)
{
  struct data *top,*new;

  top=NULL;
  new=  (struct data *)malloc(sizeof(struct data));
  new->key='a';
  top=new;
  top=add_stack_list(top,'b');
  top=add_stack_list(top,'c');
  top=add_stack_list(top,'d');
  
  //printf("%c\n",top->key);
  print_stack_list(top);
  
  free(new);
  return 0;
}

void print_stack_list(struct data *top)
{
  printf("%c\n",top->key);
  if(top->next!=NULL)
    print_stack_list(top->next);
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
