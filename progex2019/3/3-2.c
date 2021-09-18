#include <stdio.h>

void *malloc(size_t size);

int main(void)
{
  char *name[5];
  int i;
  
  puts("名前を最大５人分入力してください");
  for(i=0;i<5;i++)
    {    
      name[i]=malloc(sizeof(char) * 20);
      *name[i]=NULL;
      scanf("%s",name[i]);
      if(*name[i]==NULL)
	break;
      
    } 
  i=0;
  while(*name[i]=! NULL)
    {
      printf("%s\n",name[i]);
      i++;
    }
 return 0;
}
