#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[4][256];
  int order[4]={0,1,2,3};
  char temp;
  int i,j;
  

  for(i=0;i<4;i++)
    {
      printf("%d行目の文字列を入力して下さい（最大２５５文字）：",i+1);
      gets(str[i]);
    }


  for(i=0;i<4;i++)
    {
      for(j=i+1;j<4;j++)
	{
	  if(strcmp(str[i],str[j])>0)
	    {
	      temp=order[j];
	      order[j]=order[i];
	      order[i]=temp;
	    }
	}
    }


  for(i=0;i<4;i++)
    printf("%s\n",str[order[i]]);

  return 0;
}
