#include <stdio.h>           

int main(void)
{
  int date,day;                      
  printf("2001年8月の曜日を調べます\n");
  printf("調べたい日付は？：");

  scanf("%d",&date);   
  
  if ( date<1 ) 
    printf("2001年8月一日から始まります\n");
  else if(date>31)
    puts("2001年8月31までしかありません");
  else{
    day = (date + 3 -1 ) % 7;
    switch (day){
    case 3: printf("2001年８月%d日は水曜日です\n",date);break;
    case 4: printf("2001年８月%d日は木曜日です\n",date);break;
    case 5: printf("2001年８月%d日は金曜日です\n",date);break;
    case 6: printf("2001年８月%d日は土曜日です\n",date);break;
    case 0: printf("2001年８月%d日は日曜日です\n",date);break;
    case 1: printf("2001年８月%d日は月曜日です\n",date);break;
    case 2: printf("2001年８月%d日は火曜日です\n",date);break;
    }
  }
  return 0;
}
