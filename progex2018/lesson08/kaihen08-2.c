#include<stdio.h>

#define N (5)
#define MAX_SCORE (100)
#define MIN_SCORE (0)


/* 最高点をとった人の番号を求める関数 */
int find_max(int score[], int number);

int find_min(int score[], int number);

int main(void){

  int i;                 /* forループ用のカウンタ変数 */
  int english[N];        /* 英語の点数を格納する配列 */
  int math[N];           /* 数学の点数を格納する配列 */
  int max_e, max_m;      /* 英語，数学の最高点を代入する変数 */
  int max_e_n, max_m_n;  /* 英語，数学の最高点をとった人の番号を代入する変数 */
 
  int min_e , min_m;
  int min_e_n, min_m_n;
  /* 点数をキーボードから入力し，配列に格納する */
  printf("%d人の点数を入力して下さい．\n\n", N);

  for(i = 0; i < N; i++){
    printf("[%d] 英語:", i+1);
    scanf("%d", &english[i]);
    printf("    数学:");
    scanf("%d", &math[i]);
  }
  
  printf("aaa");
  /* 関数を呼び出して最高点をとった人の番号を算出する */
  max_e_n = find_max(english, N);
  max_m_n = find_max(math, N);
  min_e_n = find_min(english, N);
  max_m_n = find_max(math, N);

  /* 最高点を算出する */
  max_e = english[max_e_n];
  max_m = math[max_m_n];

  min_e = english[min_e_n];
  min_m = math[min_m_n];
  // printf("%d",max_e_n);
  /* 最高点を出力する */
  printf("英語の最高点:%d  [%d]\n", max_e,max_e_n+1);
  printf("d");
  printf("数学の最高点:%d  [%d]\n", max_m,max_m_n+1);
  printf("d");
  printf("英語の最低点:%d  [%d]\n", min_e,min_e_n+1);
  printf("d");
  printf("数学の最低点:%d  [%d]\n", min_m,min_m_n+1);
   printf("d");
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

int find_min(int score[], int number){
  
  int i;                  /* forループ用のカウンタ変数 */
  int min = MAX_SCORE;    /* 最高点を最低点で初期化 */
  int min_n;
  printf("ddd");
  for(i = 0; i < number; i++)
    if(score[i] <= min){   /* score[i]が最高点maxより高い？ */
      min = score[i];     /* 最高点maxをscore[i]に置き換える */
      min_n = i ;         /* 最高点をとった人の番号-1を記憶する */
    }
 
  return min_n;             /* 最高点をとった人の番号-1を呼出し元に返す */
}


