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
  struct data *top ,*new1,*new2,*new3,*new4;
  struct queue q;
  top=NULL;
  new1 = (struct data *)malloc(sizeof(struct data));
  new2 = (struct data *)malloc(sizeof(struct data));
  new3 = (struct data *)malloc(sizeof(struct data));
  new4= (struct data *)malloc(sizeof(struct data));

  new1->key='a';
  top=new1;

  top->next=new2;
  new2->key='b';
  
  top->next->next=new3;
  new3->key='c';

  top->next->next->next=new4;
  new4->key='d';
  new4->next=NULL;

  q.top=new1;
  q.rear=new4;

  print_queue_list(q);

  free(new1);
  free(new2);
  free(new3);
  free(new4);
  return 0;
}

void print_queue_list(struct queue q)
{
  if(q.top==NULL)
    printf("erorr\n");
  else
    {
      printf("%c<----TOP\n",q.top->key);
      print_stack_list(q.top->next);
    } 
}

void print_stack_list(struct data *top)
{
  if(top->next==NULL)
    printf("%c<----rear\n",top->key);
  else
    {
      printf("%c\n",top->key);
      print_stack_list(top->next);
    }
}
