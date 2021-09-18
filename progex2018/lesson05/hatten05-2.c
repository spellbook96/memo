#include <stdio.h>

int main(void)
{
  int date,i,j,start,f;
  date=1;
  while(1){
    printf("１日の曜日は？：日（１）月（２）火（３）水（４）木（５）金（６）土（７）：");
    scanf("%d",&start);
    if(start<1 ||start>7)
      continue;
    else
      break;
  }
  while(1){
    printf("月末の日付は？：28日以上、31日以下：");
    scanf("%d",&f);
    if(f>31 || f<28)
      continue;
    else
      break;
  }
  
  puts(" SUN MON TUE WED THU FRI SAT");
  
  for(i=1;i<=5;i++){
    for(j=1;j<=7;j++){
      if(i==1 &&j<start)
	printf("    ");
      else if(date<=f){
	printf("%4d",date);
	date++;
      } 
    }
    printf("\n");
  }
}
