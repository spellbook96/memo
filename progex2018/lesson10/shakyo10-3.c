#include <stdio.h>
#define ARRAY_SIZE (16)
#define STRING_SIZE (128)

int is_specified(char target); /* 指定された文字なら1，それ以外なら0 */

int main(void)
{
  char array[ARRAY_SIZE][STRING_SIZE];
  int position; /* 文字列内の位置 */
  int index; /* 配列の添字 */
  int count; /* 数字の数 */
  char target;

  /* 文字列入力 */
  for(index = 0; index < ARRAY_SIZE; index++) {
    printf("%d個目の文字列は？ ", index+1);
    gets(array[index]); /* 文字列入力 */
    if(array[index][0] == '\0')
      break;
  }

  /* 数え上げ */
  printf("数字を数えます\n");
  index = 0; 
  while(array[index][0] != '\0') { /* 先頭が\0でないなら文字列 */
    count = 0;
    position = 0;
    while((target = array[index][position]) != '\0') { /* 数字を数えるループ */
      if(is_specified(target))
        count++;
      position++;
    }
    printf("%d個目の文字列 %sには%d個\n", index+1, array[index], count);
    index++;
  }
  return 0;
}

/* 指定された文字なら1，それ以外なら0 */
int is_specified(char target)
{
  if((target >= '0') && (target <= '9'))
    return 1;
  else
    return 0;
}
