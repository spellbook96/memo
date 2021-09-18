#include<stdio.h>

#define N (5)
#define MAX_SCORE (100)
#define MIN_SCORE (0)


/* 最高点をとった人の番号を求める関数 */
int find_max(int score[], int number);

int main(void){

  int i;                 /* forループ用のカウンタ変数 */
  int english[N];        /* 英語の点数を格納する配列 */
  int math[N];           /* 数学の点数を格納する配列 */
  int max_e, max_m;      /* 英語，数学の最高点を代入する変数 */
  int max_e_n, max_m_n;  /* 英語，数学の最高点をとった人の番号を代入する変数 */

  /* 点数をキーボードから入力し，配列に格納する */
  printf("%d人の点数を入力して下さい．\n\n", N);

  for(i = 0; i < N; i++){
    printf("[%d] 英語:", i+1);
    scanf("%d", &english[i]);
    printf("    数学:");
    scanf("%d", &math[i]);
  }
  

  /* 関数を呼び出して最高点をとった人の番号を算出する */
  max_e_n = find_max(english, N);
  max_m_n = find_max(math, N);

  /* 最高点を算出する */
  max_e = english[max_e_n];
  max_m = math[max_m_n];

  /* 最高点を出力する */
  printf("英語の最高点:%d  [%d]\n", max_e,max_e_n+1);
  printf("数学の最高点:%d  [%d]\n", max_m,max_m_n+1);

  return 0;
}

int find_max(int score[], int number){

  int i;                  /* forループ用のカウンタ変数 */
  int max = MIN_SCORE;    /* 最高点を最低点で初期化 */
	int max_n;
	
  for(i = 0; i < number; i++)
    if(score[i] > max){   /* score[i]が最高点maxより高い？ */
      max = score[i];     /* 最高点maxをscore[i]に置き換える */
			max_n = i ;         /* 最高点をとった人の番号-1を記憶する */
		}
 
  return max_n;             /* 最高点をとった人の番号-1を呼出し元に返す */
}
