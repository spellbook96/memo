#include <stdio.h>


int main(void){
  int No= 1234;
  int math= 94;int en= 78;
  int code;
  int temp;
  printf("現在の成績情報は、学生証番号：%d,英語：%d,数学：%dです\n",No,en,math);
  puts("[0]学生証番号の修正");
  puts("[1]英語の点数の修正");
  puts("[2]数学の点数の修正");
  printf("どのコマンドを実行しますか？：");
  scanf("%d",&code);

  switch(code){

   case 0:
     printf("新しい学生番号を入力して下さい：");
     scanf("%d",&temp);
     if(temp<1000 ||temp > 9999){
       puts("学生番号の範囲は００００から９９９９までです。更新されませんでした");
       break;
     }
     else{
       No = temp;
       printf("現在の成績情報は、学生証番号：%d,英語：%d,数学：%dです\n",No,en,math);
       break;
     }

   case 1:
     printf("新しい英語成績を入力して下さい：");
     scanf("%d",&temp);
     if(temp<0 || temp> 100){
       puts("英語の点数は０～１００です。更新されませんでした");
       break;
     }
     else{
       en=temp;
       printf("現在の成績情報は、学生証番号：%d,英語：%d,数学：%dです\n",No,en,math);
       break;
     }

   case 2:
     printf("新しい数学成績を入力して下さい：");
     scanf("%d",&temp);
     if(temp<0 || temp> 100){
       puts("数学の点数は０～１００です。更新されませんでした");
       break;
     }
     else{
       math=temp;
       printf("現在の成績情報は、学生証番号：%d,英語：%d,数学：%dです\n",No,en,math);
       break;
     }

  default:
     puts("該当するコマンドがないため成績情報は更新されませんでした");break;
  }
  return 0;
}
