#include <stdio.h>
#include <stdlib.h>                         /* 乱数のため必要 rand(), srand() */

#define UNPLACED (-1)                       /* 足がどこにも置かれていないことを示す */
#define EDGE_TILES (2)                      /* 縦，もしくは，横の一辺のタイル数 */
#define NUM_TILES (EDGE_TILES * EDGE_TILES) /* タイルの総数 */

/* プロトタイプ宣言があると，関数をmain関数の後ろにおける */
int put_germ(int);              /* put_germ の プロトタイプ宣言 */

int check_position(int foot, int size, int already);

int put_foot(int size, int already);

int judge_infection(int left, int right, int germ) ;

int myrand(int key);

/* main関数 */
int main(void)
{
  int germ;                                   /* 細菌の位置 */
  int left, right;                            /* 両足の位置 */

  germ = put_germ(NUM_TILES);                 /* 細菌の位置を決定 */
  printf("左足 ");
  left = put_foot(NUM_TILES, UNPLACED);       /* 左足の位置 */
  printf("右足 ");
  right = put_foot(NUM_TILES, left);          /* 右足は左足の以外の位置 */
  if(judge_infection(left, right, germ) == 1) /* 感染したかどうかを判定 */
    printf("感染してしまいました．");
  else
    printf("無事です．");
  printf("細菌はタイル %d にいました\n", germ);
  return 0;
}

/* 1文字から細菌の位置を暗号化 */
int put_germ(int size) 
{
  char key;
  int location;

  printf("1文字入力: ");
  scanf("%c", &key);
  printf("入力文字は16進数で表現すると 0x%x で，これをもとに細菌の位置を決定\n", key);
  // srand((unsigned int)key);
  location = myrand(key) % size + 1;      //my rand に変更
    return location;
}

/* 足を置けるタイルかチェック */
int check_position(int foot, int size, int already)
{
  int check;
  if((foot < 1) || (foot > size)) {
    /* 1から4までの位置にしか足を置いてはいけない */
    printf("足が置けるタイルは 1 から %d です．\n", size);
    check=0;
  } else if(already == foot) {
    /* すでに足が置かれたタイルにはもう一方の足は置けない */
    printf("タイル %d にはすでに別の足が置かれています．\n", already);
    check=0;
  } else
    check=1;
  return check;
  /* （細菌がいるかどうかはわからないが）足をその位置に置いてもよい */
}

/* 今まで足が置かれていないタイルを選んで足を置く関数  */
/* sizeはタイルの数, alreadyはすでに置かれた足の位置 */


int put_foot(int size, int already)
{

  int position;                          /* 入力された足の位置 */

  do {
    printf("位置[1-%d]: ", size);       /* 1から4までの位置を入力 */
    scanf("%d", &position);
  } while(check_position(position, size, already) == 0);
  /* ただしい位置に足を置くまで再入力 */
  return position;
}

/* 細菌のいるタイルに足を置くと感染，足を置かなければ無事  */
/* 引数は順に左足，右足，細菌の位置                    */
int judge_infection(int left, int right, int germ) 
{
  int judge;
  if((germ - left) * (germ - right) == 0)
    judge=1;             /* この式で判定できる理由を考えよ */
  else
    judge=0;
  return judge;
}


int myrand(int key){
  int a;
  a=(double)( key * key);
  
  return a;
}
