#include <stdio.h>
#define BIN_NUM (8)
#define BIN_WIDTH (25)


typedef struct {
  char name[255];             /* 名前 */  
  char gen;                           /* 性別 */
  double eng;                         /* 英語の点 */
  double math;                        /* 数学の点 */
  double total;                       /* 英語と数学の合計点 */

} Score;

void total_score(Score *score)        /* 個人の合計点を計算する関数 */
{
  score->total = score->eng + score->math;
}

void g(int s,int m[BIN_NUM]);

int main(void)
{
  FILE *fr;
  int m[BIN_NUM]={0};
  int i,j;
  
  Score score={};
  if((fr=fopen("Seiseki.dat","r"))==NULL)
    {
      printf("ファイルオープンできません\n");
    }
  else
    {
      while (fscanf(fr,"%s %c%lf%lf",score.name,&score.gen,&score.eng,&score.math)==4) {
	
	total_score(&score);                     /* 合計点の計算 */
	
	g(score.total,m);
	
	//	num++;                                   /* データ数の更新 */
      }
    }
  
  for(i=0;i<BIN_NUM;i++)
    {
      printf("%d ~ %d: %d",i*25,((i+1)*25)-1,m[i]);
      
      for(j=0;j<m[i];j++)
	putchar('*');
      puts("");
    }
  return 0;
}

void g(int s,  int m[BIN_NUM])

{
  if(s>=0 && s<=24)
    m[0]++;
  if(s>=25 && s<=49)
    m[1]++;
  if(s>=50 && s<=74)
    m[2]++;
  if(s>=75 && s<=99)
    m[3]++;
  if(s>=100 && s<=124)
    m[4]++;
  if(s>=125 && s<=149)
    m[5]++;
  if(s>=150 && s<=174)
    m[6]++;
  if(s>=175 && s<=200)
    m[7]++;
}
