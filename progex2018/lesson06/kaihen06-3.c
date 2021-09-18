#include <stdio.h>

#define MAX_NUMBER (100)

int main(void)
{
  /* 約数を格納する配列 */
  int divisor[300][300]; 
  int count[300]; /* 約数の個数を格納する配列 */
  int i,j; /* for文用のカウンタ変数 */
  int counter; /* 約数の個数を数えるカウンタ変数 */



  /* 1から100までの整数に対して約数を探す */
  for(i = 51; i <= 150; i++) {
    counter = 0;

    for(j = 1; j <= i; j++) {
      if(i%j == 0) { /* 整数iが整数jで割り切れる？ */
        /* 整数jを整数iの約数として配列に格納 */
        divisor[i-1][counter]=j; 
        counter++; /*約数の個数を数えるカウンタ変数を1増やす*/
      }
    }

    count[i-1] = counter;
  }
  i=1;
  do{
  /* 約数を出力する */
    printf("いくつの約数を入力しますか：");
    scanf("%d",&i);
    if(i==0){
      break;
    }
    printf("%dの約数: ", i);

    for(j = 0; j < count[i-1]; j++)
      printf("%d, ", divisor[i-1][j]);
  
    printf("\n");
  }while(2);
  return 0;
}
