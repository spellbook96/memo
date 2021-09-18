#include <stdio.h>
#include <stdlib.h>

struct data{
  char key;
  struct data *next;
};

struct queue{
  struct data *top, *rear;
};

void print_queue_list(struct queue q);

void print_stack_list(struct data *top);

int main(void)
{
  struct data *top ,*new1,*new2,*new3;
  struct queue q;
  top=NULL;
  new1 = (struct data *)malloc(sizeof(struct data));
  new2 = (struct data *)malloc(sizeof(struct data));
  new3 = (struct data *)malloc(sizeof(struct data));

  new1->key='a';
  top=new1;

  top->next=new2;
  new2->key='b';
  
  top->next->next=new3;
  new3->key='c';

  q.top=new1;
  q.rear=new3;

  printf("%c\n",q.top->key);
  printf("%c\n",q.top->next->key);
  printf("%c\n",q.rear->key);
 
  free(new1);
  free(new2);
  free(new3);
  return 0;
}

void print_queue_list(struct queue q)
{
  if(q.top==NULL)
    printf("erorr\n");
  else
    print_stack_list(q.top);
      
}

void print_stack_list(struct data *top)
{
  printf("%c\n",top->key);
  if(top->next!=NULL)
    print_stack_list(top->next);
}
