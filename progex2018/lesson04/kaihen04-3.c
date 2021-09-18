#include <stdio.h>                 /* printf, scanf を使うのに必要 */

int main(void)
{
  int num;                         /* くじの番号 */

  printf("4桁の正の整数を入力してください：");
  scanf("%d",&num);    /* キーボードから入力文字列を読み込み，整数に変換しnumに格納 */
  
  if ( num < 1000 || num > 9999 ) /* 4桁の整数であるかのチェック */
    printf("正しい4桁の正の整数を入力してください\n");
  else if ( num % 100 == 44 )
		printf("1等当選です!\n");  /* 下2桁が44の場合 */
  else if ( num % 100 == 65||num % 100 ==81 )
		printf("2等当選です!\n");  /* 下2桁が65の場合 */
  else if ( num % 100 == 20 ||  num % 100 == 71 )
		printf("3等当選です!\n");  /* 下2桁が20または71の場合 */
  else if( (num / 1000)==3 && num % 3 == 0)
	printf("特別賞当選です！\n");
  else 
		printf("残念でした\n");

  return 0;
}
