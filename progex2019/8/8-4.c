#include <stdio.h>
#include <stdlib.h>

struct data{
  char key;
  struct data *next;
};

struct queue{
  struct data *top, *rear;
};

void enqueue (struct queue *q,char key);

char dequeue(struct queue *q);

void print_queue_list(struct queue q);

void print_stack_list(struct data *top);

int main(void)
{
  struct queue q;
  q.top=NULL;
  q.rear=NULL;
  enqueue(&q,'a');
  enqueue(&q,'b');
  print_queue_list(q);
  enqueue(&q,'c');
  print_queue_list(q);
  enqueue(&q,'d');
  print_queue_list(q);

  printf("DEQUEUE %c\n",dequeue(&q));
  print_queue_list(q);
  printf("DEQUEUE %c\n",dequeue(&q));
  print_queue_list(q);
  printf("DEQUEUE %c\n",dequeue(&q));
  print_queue_list(q);
  printf("DEQUEUE %c\n",dequeue(&q));
  print_queue_list(q);
  free(q.top);
  free(q.rear);
  return 0;
}

void print_queue_list(struct queue q)
{
  if(q.top==NULL)
    printf("erorr\n");
  else  if(q.top->next==NULL)
    {
      printf("%c<----TOP\n",q.top->key);
      puts("<----rear");
    }
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

void enqueue (struct queue *q,char key)
{
  printf("ENQUEUE %c\n",key);
  if(q->top==NULL)
    {
      q->top=(struct data *) malloc( sizeof(struct data) );
      q->rear=(struct data *) malloc( sizeof(struct data) );
      q->top->key= key;
      q->top->next=NULL;
      q->rear->key=key;
      q->rear->next=NULL;
    }
    
    else if(q->top->next==NULL)
      {
	q->top->next=(struct  data *) malloc( sizeof(struct data) );
	q->top->next->key=key;
	q->top->next->next=NULL;
	q->rear=q->top->next;
      }
    else
      {
	q->rear->next=(struct data *) malloc( sizeof(struct data) );
	q->rear->next->key=key;
	q->rear->next->next=NULL;
	q->rear=q->rear->next;
      }
}
  
char dequeue(struct queue *q)
{
  char c;
  if(q->top==NULL)
    {
    puts("ERROR!");
    return '\0';
    }
  else if(q->top->next==NULL)
    {
      c=q->top->key;
      q->top=NULL;
      return c;
    }
  else
    {
      c=q->top->key;
      q->top=q->top->next;
      return c;
    }
}
