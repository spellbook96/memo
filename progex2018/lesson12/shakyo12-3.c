#include <ctype.h>
#include <stdio.h>
#define ARRAY_SIZE (128)

int change(char in[], char out[]);
int is_vowel(char x);

int main(void)
{
	 /* 元の文字列 */
	char original[ARRAY_SIZE] = {};
	/* 変換後の文字列(初期化子はダミー) */
	char target[ARRAY_SIZE] = "This is a dummy string for debug"; 
	int count; /* 文字数 */

    /* 文字列入力 */
    printf("文字列は： ");
    scanf("%s",original);

	/* 文字列の変換 */
    count = change(original, target);

    /* 文字列出力 */
    printf("結果の文字列は %s\n", target);
    printf("出力文字列の長さは %d\n", count);

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
  case 'A': 
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    return 1;
    break;
  default:
    return 0;
    break;
  }
}

/* 配列in上の文字列の母音以外を小文字にした配列outを作成する関数 */
int change(char in[], char out[])
{
	char *inptr,*outptr; /* 文字の書き換え位置 */
	int i=0; /* 文字数 */

	/* 配列の先頭を指すようにポインタを設定 */
	inptr = in;
	outptr = out;
	
	do {
		i++; /* 文字数を数える */
		if(is_vowel(*inptr) || *inptr == '\0') {  /* 母音か終端であれば */
			*outptr = *inptr; /* そのまま複製 */
		} else {
			*outptr = tolower(*inptr); /* 小文字に */
		}
		outptr++;
	} while (*inptr++); /* \0が見つかるまで */
	
	return i-1; /* 文字数としては1少ないはず */
}
