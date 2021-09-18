#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE (256)               /*文字列用サイズ*/
#define NUM (5)                         /*データ数*/

struct Profile {                        /*構造体*/
  int number;                           /*番号*/
  char name[BUFFER_SIZE];               /*名前*/
  int age;                              /*年齢*/
  double height;                        /*身長*/
  double weight;                        /*体重*/
  char specialskill[255];
};

int main(void)
{

  int num;                              /*データの番号*/
  int no;
  char change[255];
  /*=構造体変数の定義と初期化=*/
  struct Profile profile[NUM]={{0,"立命　太郎",20,175.0,70.0,"英会話"},
			       {1,"草津　二郎",22,180.0,65.0,"プログラミング"},
			       {2,"衣笠　花子",21,155.0,52.0,"テニス"},
			       {3,"茨木　華子",20,162.0,55.0,"ピアノ"},
			       {4,"滋賀　三郎",22,168.0,55.0,"読書"}};
  printf("修正する情報の番号は：");
  scanf("%d",&num);
  /*=初期登録情報の出力=*/
  printf("現在の登録情報は\n");                 

  printf("番号: %d\n", profile[num].number);
  printf("名前: %s\n", profile[num].name);
  printf("年齢: %d\n", profile[num].age);
  printf("身長: %5.1f\n", profile[num].height);
  printf("体重: %4.1f\n", profile[num].weight);
  printf("特技：%s\n",profile[num].specialskill);
  
  printf("どの項目を修正しますか[１：名前、２：年齢、３：身長、４：体重、５：特技]：");
  scanf("%d",&no);
  printf("どのように修正しますか：");
  scanf("%s",&change);

  switch (no){
  case 1 : strcpy(profile[num].name,change);break;
  case 2 : profile[num].age = atoi(change);break;
  case 3 : profile[num].height = atoi(change); break;
  case 4 : profile[num].weight = atoi(change); break;
  case 5 : strcpy(profile[num].specialskill,change);break; 
  }
  puts("修正後の登録情報です");
  printf("番号: %d\n", profile[num].number);
  printf("名前: %s\n", profile[num].name);
  printf("年齢: %d\n", profile[num].age);
  printf("身長: %5.1f\n", profile[num].height);
  printf("体重: %4.1f\n", profile[num].weight);
  printf("特技：%s\n",profile[num].specialskill);


    
  return 0;
}
