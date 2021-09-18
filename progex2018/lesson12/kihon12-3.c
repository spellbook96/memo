#include <stdio.h>
#include <string.h>

//void change(char *s);

int main(void)
{
  char str[3][16] = {"BKC","NojiHigashi","Kusatsu"};
  int i,j;
  char moji[256];
  for(i=0;i<3;i++)
    {
      printf("%dつ目の文字列を入力して下さい（最大１５文字）：",i+1);
      gets(moji);
      strcpy(str[i],moji);
      printf("%dつ目の文字列%sをコピーしました\n",i+1,str[i]);
    }
  
  
  for(j=0;j<3;j++)
    {
      for(i=0;i<16;i++)
	{
	  if(str[j][i]==0)
	    putchar('*');
	  else
	    putchar(str[j][i]);
      
	}
    }
  puts("");
  return 0;
}


