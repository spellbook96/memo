#include <stdio.h>

void add(int *p, int v);

int main(void)
{
  int a=5;               /* int型の変数 */
  int *a_add=&a;         /* int型のポインタ、中には変数aのアドレスが入っている */
  int b[4]={1, 2, 3, 4}; /* int型の配列 */

  /* int型の変数とint型のポインタを使って
     アドレス演算子（&）と間接演算子（*）が表現するものを確認 */
  printf("a=%d\n",a);
  printf("&a=%p\n", &a);
  printf("a_add=%p\n", a_add);
  
  /* &a_addはポインタa_addのアドレスを示す．
     aやaのアドレスとは全く関係がない */
  printf("&a_add=%p\n", &a_add);
  
  /* *a_addはa_addに入っているアドレス（ここでは変数a）の中身を表示する */
  printf("*a_add=%d\n", *a_add);

  
  /* 配列とポインタの関係について確認 */
  printf("&b[0]=%p\n", &b[0]);

  /* 配列bについてbとだけ入力した場合bはb[0]のアドレスとなる(=&b[0]) */
  printf("b=%p\n", b);

  /* 間接演算子を使ってb[0]の値を表示 */
  printf("*b=%d\n", *b); 

  /* 間接演算子を使ってb[3]の値を表示 
     配列はメモリ上に連続して配置されているので
     アドレス(b+3)がb[3]のアドレスとなる */
  printf("*(b+3)=%d\n", *(b+3));
  
  /* １つの変数に必要なメモリの容量は１バイトでないので
     b[1]のアドレスは、数値上はb[0]のアドレス+1ではない
     （int型は4バイトなので+4）。*/
  printf("(b+1)=%p\n", b+1);


  /* 関数を用いて変数に値を加算 */
  add(&a,3);
  /* 変数aの値を表示 */
  printf("a=%d\n",a);

  /* 配列bの値を表示 */
  printf("b: %d %d %d %d\n", b[0],b[1],b[2],b[3]);
  
  return 0;
}

void add(int *p, int v){

  *p = *p + v;

}
