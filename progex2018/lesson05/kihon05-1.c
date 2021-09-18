#include <stdio.h>

int main(void)
{
  int num,line,need;
  printf("用意した石の数は？");
  scanf("%d",&num);
  line=1;
  need=1;
  while(num>=need){
    num=num-need;
    line++;
    need=line*line;
  }
  printf("その数の石でできるピラミッドは%d段で、石は%d個残ります\n",line-1,num);
  return 0;
}
