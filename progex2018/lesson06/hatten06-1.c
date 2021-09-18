#include <stdio.h>


int main(void)
{
  int list[100]={};
  int temp[100]={};
  int count,i,n,No;
  count=0;
  while(2){
    printf("正整数：");
    scanf("%d",&n);
 
    No=0;
    if(count==0){
      list[0]=n;
      count++;
      continue;
    }
    
    for(i=count-1;i>=0;i--){
      
      if(n>list[i-1]&&n<list[i]&&list[i]!=0&&i-1>0){
	
	No=i;
	break;
      }
    }
    
    for(i=No;i<10;i++){
      temp[i]=list[i];
      list[i]=0;
    }
    
    for(i=No;i<10;i++){
      list[i+1]=temp[i];
    }
    list[No]=n;
    
   if(n==0)
      break;
    count++;
  }


  for(i=0;i<count+1;i++){
    printf("%d ",list[i]);
  }
  
  return 0;
}
