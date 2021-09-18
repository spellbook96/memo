#include <stdio.h>

#define ROW (2)
#define COLUMN (2)

/* 行列Aと行列Bの和を求める関数 */
void matrix_add(int matrix_a[ROW][COLUMN], int matrix_b[ROW][COLUMN], int matrix_c[ROW][COLUMN]);


int main(void){
  
  int i, j; /* forループ用のカウンタ変数 */

  /* 行列A，B，Cを代入する配列の宣言 */
  int matrix_a[ROW][COLUMN], matrix_b[ROW][COLUMN], matrix_c[ROW][COLUMN];
  
  printf("行列Aと行列Bの和を計算します\n");

  printf("行列Aの要素を入力して下さい\n");
  for(i = 0; i < ROW; i++)
    for(j = 0; j < COLUMN; j++) {
      /* 行列Aの要素を標準入力から入力し，matrix_aに格納する */
      printf("matrix_a[%d][%d]:", i, j);
      scanf("%d", &matrix_a[i][j]);
    }
  
  printf("行列Bの要素を入力して下さい\n");
  for(i = 0; i < ROW; i++)
    for(j = 0; j < COLUMN; j++){
      /* 行列Bの要素を標準入力から入力し，matrix_bに格納する */
      printf("matrix_b[%d][%d]:", i, j);
      scanf("%d", &matrix_b[i][j]);
    }
  
  /* 行列Aと行列Bの和を求める関数を呼び出す */
  matrix_add(matrix_a, matrix_b, matrix_c);

  /* 和を印字する */
  printf("行列Aと行列Bの和は\n");
  for(i = 0; i < ROW; i++){
    for(j = 0; j < COLUMN; j++)
      printf("%3d", matrix_c[i][j]);
    printf("\n");
  }
  printf("です\n");

  return 0;
}

void matrix_add(int matrix_a[ROW][COLUMN], int matrix_b[ROW][COLUMN], int matrix_c[ROW][COLUMN]){
  
  int i, j; /* forループ用のカウンタ変数 */

  for(i = 0; i < ROW; i++)
    for(j = 0; j < COLUMN; j++)
      /* matrix_a[i][j]とmatrix_b[i][j]の和をmatrix_c[i][j]に代入 */
      matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j]; 

}
