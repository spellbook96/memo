#include <stdio.h>
#include <stdlib.h>

struct data{
  char key;
  struct data *next;
};

int main(void)
{
  struct data *top ,*new1,*new2,*new3;

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
  top->next->next->next = NULL;

  printf("%c\n",top->key);
  printf("%c\n",top->next->key);
  printf("%c\n",top->next->next->key);

  free(new1);
  free(new2);
  free(new3);
  return 0;
}
