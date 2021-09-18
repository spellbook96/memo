#include <stdio.h>
#include <string.h>

int main(void)
{
  char *ptr[] = {"BKC","NojiHigashi","Kusatsu"};
  char str[3][16];
  int i;
  
  for(i=0;i<3;i++)
    {
      strcpy(str[i],ptr[i]);
      printf("%dつ目の文字列%sをコピーしました\n",i+1,str[i]);
    }
  
  return 0;
}


