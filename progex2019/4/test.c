#include<stdio.h>
#include<string.h>

int main(void)
{
  char str[25]="54-3";
  char *p;

  p=strtok(str,"+");
  printf("%s\n",p);

  p=strtok(str,"/");
  printf("%s\n",p);
  return 0;
}
