#include <stdio.h>

char mes[10000];

int wordsearch(char *target, char *key);

int main(void)
{
  char word[256];
  
  printf("文章を入力して下さい（最大１００００文字）：");
  gets(mes);
  printf("検索する単語を入力して下さい（最大２５５文字）：");
  gets(word);

  printf("単語%sは%d文字目に見つかりました\n",word,wordsearch(mes,word));

  return 0;
}


int wordsearch(char *target, char *key)
{
  int i,j;
  int keylong = strlen(key);
  int tlong = strlen(target);
  char temp[256]={};


  for(i=0;i<= tlong-keylong+1 ;i++)
    {
      for(j=0;j<keylong;j++)
	temp[j]= target[i+j];
      
      //    printf("%s\n",temp);
      if(strcmp(temp,key)==0)
	return i+1;
	
    }
  return -1;
}


// Our greatest glory is not in never failing, but in rising up every time we fail.
