#include <stdio.h>
#include <string.h>

typedef struct word_pair{
  char longer_word[10];
  char shorter_word[10];
  char combined_word[20];
  int longer_word_length;
  int shorter_word_length;
}word_pair_t;

word_pair_t create_word_pair ( char *a, char *b);

int main(void)
{
  char a[10], b[10];
  word_pair_t c;
  printf("二つの文字列を入力してください：\n一つ目：");
  scanf("%s",a);
  printf("二つ目：");
  scanf("%s",b);
  
  c=create_word_pair(a,b);

  printf("longer_word=%s\nshorter_word =%s\ncombined_word=%s\nlonger_word_length = %d\nshorter_word_length = %d\n",c.longer_word,c.shorter_word,c.combined_word,c.longer_word_length,c.shorter_word_length);
  

  return 0;
}

word_pair_t create_word_pair ( char *a, char *b)
{
  word_pair_t  temp;
  int al= strlen(a); int bl = strlen(b);

  if(al>bl){
    strcpy(temp.longer_word,a);
    strcpy(temp.shorter_word,b);
    temp.longer_word_length = al;
    temp.shorter_word_length= bl;
    strcpy(temp.combined_word,a);
    strcat(temp.combined_word," ");
    strcat(temp.combined_word,b);
  }
  else if(al<bl){
    strcpy(temp.longer_word,b);
    strcpy(temp.shorter_word,a);
    temp.longer_word_length = bl;
    temp.shorter_word_length= al;
    strcpy(temp.combined_word,b);
    strcat(temp.combined_word," ");
    strcat(temp.combined_word,a);
  }
  else{
    if(strcmp(a,b)>0){
      strcpy(temp.longer_word,a);
      strcpy(temp.shorter_word,b);
      temp.longer_word_length = al;
      temp.shorter_word_length= bl;
      strcpy(temp.combined_word,a);
      strcat(temp.combined_word," ");
      strcat(temp.combined_word,b);
    }
    if(strcmp(a,b)<0){
      strcpy(temp.longer_word,b);
      strcpy(temp.shorter_word,a);
      temp.longer_word_length = bl;
      temp.shorter_word_length= al;
      strcpy(temp.combined_word,b);
      strcat(temp.combined_word," ");
      strcat(temp.combined_word,a);
    }
    else{
      strcpy(temp.longer_word,a);
      printf("error\n");
    }
  }
  return temp;
}
