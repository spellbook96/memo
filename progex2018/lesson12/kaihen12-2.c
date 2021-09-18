#include <stdio.h>
#define ARRAY_SIZE (512)
#include <string.h>
int compare(char *first, char *second);

int main(void){
    char first[ARRAY_SIZE];
    char second[ARRAY_SIZE];
    int result;

    // 文字列入力
    printf("最初の英単語は： ");
    gets(first);
    printf("２番目の英単語は： ");
    gets(second);

    result = compare(first, second); // 文字列を比較する関数

    printf("compareの比較結果は　%d\n", result);
    printf("strcmpの比較結果は　%d\n", strcmp(first, second));

    return 0;
 }

int compare(char *first, char *second)
{
  char *left;
  char *right;
  int diff;

 // ポインタを文字列の先頭へ
  left = first;
  right = second;

  while(*left != '\0') {
    if(*right == '\0') // ２番目の文字列の方が短かい
      return *left;
    diff = *left - *right;
    if(diff != 0) // 文字列の途中で違いあり
      return diff;
    left++;
    right++;
  }
  if(*right == '\0')
    return 0;  // 文字列は等しい
  else
    return 0 - *right; // 最初の文字列の方が短かい
}


