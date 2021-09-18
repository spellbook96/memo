#include <stdio.h>

int leapYear(int year);

int month_day(int,int);

int main(void){
  
  int year,month,day,i;

  puts("今日の日付を入力して下さい");
  printf("年：");
  scanf("%d",&year);
  printf("月：");
  scanf("%d",&month);
  printf("日：");
  scanf("%d",&day);
  
  printf("%d年%d月%d日の10000日後は",year,month,day);

  for(i=10000;i> 0;i--){

    if(month==12&&day==31){
      month=1;
      day=1;
      year++;
      continue;
    }
    if(day== month_day(year,month)){
      day=1;
      month++;
      continue;
    }
    day++;
  }

  printf("%d年%d月%d日です\n",year,month,day);

  return 0;
}


int leapYear(int year){
  int temp1,temp2,temp3;

  temp1=year % 4;
  temp2=year % 100;
  temp3=year % 400;
  if(temp1==0 && temp2!=0 ||temp3==0)  return 1;
  else return 0;
}

int month_day(int year,int month){
  switch (month){
   case 1:return 31;
   case 2: return 28+leapYear(year);
   case 3:return 31;
   case 4:return 30;
   case 5:return 31;
   case 6:return 30;
   case 7:return 31;
   case 8:return 31;
   case 9:return 30;
   case 10:return 31;
   case 11:return 30;
   case 12:return 31;
  }
  return 0;
}
