#include <stdio.h>                 /* printf, scanf を使うのに必要 */

int main(void)
{
  int num;                         /* くじの番号 */

  printf("4桁の正の整数を入力してください：");
  scanf("%d",&num);    /* キーボードから入力文字列を読み込み，整数に変換しnumに格納 */
  
  if ( num < 1000 || num > 9999 ) /* 4桁の整数であるかのチェック */
    printf("正しい4桁の正の整数を入力してください\n");
  else {                          /* 4桁の整数が入力された場合 */
    switch ( num % 100 ) {        /* num の100で割った余り(下2桁)によって分岐する */
		case 15: printf("2等当選です!\n"); break;  /* 下2桁が15の場合 */
		case 50: printf("3等当選です!\n"); break;  /* 下2桁が50の場合 */
		case 77: printf("1等当選です!\n"); break;  /* 下2桁が77の場合 */
		case 81: printf("3等当選です!\n"); break;  /* 下2桁が81の場合 */
		default: printf("残念でした\n"); break;
    }

  }

  return 0;
}
