#include <stdio.h>

void set_zero(int [],int);

void print_array(const in [],int);

int main(void){
  int ary1[] ={1,2,3,4,5};
  int ary1_n = 5;

  printf("ary1 ="); print_array(ary1,ary1_n); putchar('\n');

  set_zero(ary1,ary1_n);

  puts("配列の全要素に０を代入しました");
  printf("ary1 ="); print_array(ary1,ary1_n); putchar('\n');

  return 0;
}


void set_zero(int v[], int n){
  int i;
  
  for(i=0;i<n;i++)
    v[i]=0;
}


void print_array(const int v[],int n){
  int i;

  printf("{");
  for(i=0;i<n;i++)
    printf("%d ",v[i]);
  printf("}");
}
