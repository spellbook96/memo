#include <stdio.h>
#define MAX (255)

struct Profile{
  int number;
  char Jname[MAX];
  char Ename[MAX];
  char address[MAX];
};

void print_data (struct Profile data[]);

int main(void)
{


  struct Profile data[3] = {{1,"立命　太郎","Ritumei Taro","滋賀県草津市野路東１ー１ー１"},{2,"衣笠　花子","Kinugasa Hanako","京都府京都市北区等持院北町 56-1"},{3,"朱雀 二郎","Suzaku Jiro","京都府京都市中京区西ノ京朱雀町 1"}};
  
  print_data(data);

  return 0;
}


void print_data (struct Profile data[])
{
  int i;

  for(i=0;i<3;i++)
    {
      printf("学生番号：%d\n",data[i].number);
      printf("名前：%s\n",data[i].Jname);
      printf("名前(ローマ字)：%s\n",data[i].Ename);
      printf("住所:%s\n",data[i].address);
      puts("");
    }
}
