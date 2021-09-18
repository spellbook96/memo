#include <stdio.h>
#define ARRAY_SIZE (128)

int is_vowel(char x); /* 母音なら1，それ以外なら0を返す */

void set_character(char target[], int position, char x);

int main(void)
{
    char original[ARRAY_SIZE]; /* 元の文字列の添字 */
    char target[ARRAY_SIZE]; /* 変換後の文字列の添字 */
    int index;
    int count;

    // 文字列入力
    printf("文字列は？ ");
    scanf("%s", original);

    count = 0;
    for(index = 0; index < ARRAY_SIZE; index++) {
      if(original[index] == '\0') {
        target[count] = '\0';
        break;
      } else if( is_vowel(original[index]) ) {
        set_character(target, count, '*');
        count++;
        set_character(target, count, original[index]);
        count++;
        set_character(target, count, '*');
        count++;
      } else {
        set_character(target, count, original[index]);
        count++;
      }
    }
    // 文字列出力
    printf("結果の文字列は %s\n", target);

    return 0;
}

/* 母音なら1，それ以外なら0を返す関数 */
int is_vowel(char x)
{
  switch(x) {
  case 'a': 
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    return 0;
    break;
  default:
    return 1;
    break;
  }
}

/* 配列上の指定位置に指定文字を設定する関数 */
void set_character(char array[], int position, char x)
{
    array[position] = x;
} 
