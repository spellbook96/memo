#include <stdio.h>
#include <math.h>                      /* 関数 sqrt(double) に必要 */

/* 座標を表す構造体 */
typedef struct {
  int x;                               /* x座標 */
  int y;                               /* y座標 */
} position;

typedef struct {
  position pos;                        /* 座標を表す構造体（x座標とy座標をもつ） */
  double   fuel;                       /* 残燃料量 */
} car;

/* 移動距離を計算し残燃料量と比較し，燃料が残っている場合は座標と残燃料量を更新し0を返し，
燃料が残っていない場合は1を返す関数 */
int move(car *c, int dx, int dy)
{
  double dist;                         /* 移動距離 */

  dist = sqrt(dx*dx+dy*dy);            /* 移動距離(=消費燃料)の計算 */
  if (dist >(*c).fuel) {                /* 移動距離と残燃料量の比較 */
    return 1;                          /* 燃料が不足していたら１を返す */
  } else {
    (*c).pos.x += dx;                    /* x座標を更新 */
    (*c).pos.y += dy;                    /* y座標を更新 */
    (*c).fuel -= dist;                   /* 残燃料量を更新 */
    return 0;                          /* 燃料が足りていたら０を返す */
  }
}

int main(void)
{
  car c={{2,3},10.0};                  /* 構造体の初期化 座標(2,3) 残燃料量 10.0 */
  int dx, dy;
        
  printf("x方向に進む距離：");         /* x方向の移動（整数）の入力 */
  scanf("%d",&dx);
  printf("y方向に進む距離：");         /* y方向の移動（整数）の入力 */
  scanf("%d",&dy);
                        
  /* 移動距離を計算し残燃料量と比較し，移動する関数を呼び出し */
  if (!move(&c,dx,dy)) {
    printf("残燃料量：%f\n",c.fuel);   /* 残燃料量の表示 */  
    printf("到達地点の座標：(%d, %d)\n",c.pos.x,c.pos.y); /* 移動後の座標の表示 */
  } else {
    printf("燃料が足りません！\n");    /* 「燃料不足」を表示 */
  }

  return 0;
}
