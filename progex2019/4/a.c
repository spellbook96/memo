#include <stdio.h>
#include <string.h>

int main(void){
  char str[64];
  char *p;

  int a,b;
  printf("数式を入力してください：");

  scanf("%s",str);

  p= strtok(str,"+");
    p= strtok(str,"-");
  printf("%s\n",p);
  printf("%s\n",str);

  return 0;
}
