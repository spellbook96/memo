#include <stdio.h>

typedef struct {
  int number;
  double english;
  double math;
  double japanese;
}Results;

int main(void)
{
  Results list[128]={0,0,0,0};
  int i;
  int n;
  double english,math,japanese=0;
  for(i=0;i<128;i++)
    {
      printf("学生番号を入力して下さい：");
      scanf("%d",&list[i].number);
      if(list[i].number==0)
	{
	  n=i;
	  break;
	}
      printf("英語の得点を入力して下さい：");
      scanf("%lf",&list[i].english);
      printf("数学の得点を入力して下さい：");
      scanf("%lf",&list[i].math);
      printf("国語の得点を入力してください：");
      scanf("%lf",&list[i].japanese);
      english+=list[i].english;
      math+=list[i].math;
      japanese+=list[i].japanese;

    }

 
  english=english/n;
  math=math/n;
  japanese=japanese/n;

  printf("英語、数学、国語の平均点は%.1f、%.1f、%.1f点です\n",english,math,japanese);

  return 0;
}
