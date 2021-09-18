#include <stdio.h>

typedef struct 
{
  int face;
  char *suit;
} Card;

void swap(Card *x, Card *y)
{
  Card t = *x;
  *x=*y;
  *y=t;
}


int main(void)
{
  Card a = {3,"Spade"};
  Card b= {6,"Heart"};
  Card *p=&a;

  printf("a= %s の %d \t",p->suit,p->face);
  printf("b= %s の %d\n",b.suit,b.face);

  swap(&a,&b);

  printf("a= %s の %d \t",a.suit,a.face);
  printf("b= %s の %d\n",b.suit,b.face);

  return 0;
}
