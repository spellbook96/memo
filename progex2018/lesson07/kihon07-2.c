#include <stdio.h>

void run(char c, int length);


int main(void){
  
  int n;
  int i;
  do{
    printf("正の整数：");
    scanf("%d",&n);
    if(n>0) break;
  }while(2);
  
  for(i=0;i<n;i++){
    printf("%d:",i+1);
    run(' ',i);
    run('*',n-i);
    
    printf("\n");
  }
  
  return 0;
}


void run(char c, int length){
  int i;
  if(length!=0){
    for(i=1;i<=length;i++){
      putchar(c);
    }
  }
}
