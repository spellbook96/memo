#include <stdio.h>

int main(void)
{
  int n;                 /* 整数 n */
  int line;              /* 行番号 */
  int mark;              /* マークのループ用変数 */

  printf("正の整数をを入力して下さい： "); /* キーボードからの入力を促すメッセージ出力 */
  scanf("%d", &n);       /* 入力文字列から整数に変換 */

  if(n<=0) {             /* 入力した数が正の整数でない場合の処理 */
    printf("正の整数ではありません\n");
  }
	else {
		for(line=1;line<=n;line++) {          /* 各行の出力 */
      printf("%d ",line);                 /* 行番号の出力 */
      for(mark=1;mark<=line-1;mark++)
				printf(" ");                      /* 左の空白を出力 */
      for(mark=1;mark<=n+1-line;mark++)
				printf("@");                      /* アットマークを出力 */
      printf("\n");                       /* 各行の最後で改行 */
		}
	}
	
  return 0; 
}
