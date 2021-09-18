#include <stdio.h>


int main(void)
{
  int list[10]={10,5,25,-10,7,0,52,27,-8,1};
  int i;
  for(i=9;i>=0;i--){
    printf("%d番目の内容は%dです\n",i,list[i]);
  }
  
  return 0;
}
