#include <stdio.h>

#define BUFFER_SIZE 256

void playerTurn(int *x,int max); /* プレイヤーが入力した数値をXから減らす関数 */
void aiTurn(int *x,int max);     /* aiが数値を決め、その数値をXから減らす関数 */


int main(void)
{
  int x=30;      /* 残りの数値。初期値は50 */
  int *x_add=&x; /* 変数xのアドレスを入れるポインタ */
  int max=8;     /* 一度に減らすことができる数値の最大値を示す変数。今回は8 */
  char buf[BUFFER_SIZE];

  /* xが0以下になるまでプレイヤーの手順とaiの手順を繰り返す */
  while(x>0) { 
    /* プレイヤーのターン。関数playerTurnではxの値の変更を行うため、
      引数としてxではなくxのアドレスであるx_addを引数に使う */
    playerTurn(x_add, max);

    /* xが0以下になるとプレイヤーの負けとして手順の繰り返しを終了する */
    if(x<=0) { 
      printf("数値が0以下になったのであなたの負けです\n");
      break;
    }

    /* aiのターン。x_addを引数に使うのは、playerTurnと同じ理由。*/
    aiTurn(x_add, max);

    /* xが0以下になるとプレイヤーの勝ちとして手順の繰り返しを終了する */
    if(x<=0) { 
      printf("数値が0以下になったのであなたの勝ちです\n");
      break;
    }
  }
  
  return 0;
}

/* プレイヤーのターンでの処理：
   xはint型のポインタなので*xの値を変更した場合、main関数のxも変更される */
void playerTurn(int *x, int max)
{
  int input;
  
  printf("現在の数値は%dです。減らす数を入力してください（1以上%d以下です）\n",*x,max);
  scanf("%d", &input);

  *x-=input;
  printf("あなたが入力した数値は%dです。現在の数値は%dです。\n", input, *x);
}

/* aiのターンでの処理 */
void aiTurn(int *x,int max)
{
  int input=3; /* aiが決定する減らす数値 （ここでは毎回3を減らしていくai）*/

  *x-=input; /* 決定した数値inputを*x(main関数におけるx)から引く */
  printf("aiが入力した数値は%dです。現在の数値は%dです\n", input, *x);
}
