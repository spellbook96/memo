#include <stdio.h>
#include <string.h>

int main(void){
  char str[64],temp[64];
  char *p;

  int a,b;
  printf("数式を入力してください：");

  scanf("%s",str);
  strcpy(temp,str);
  p= strtok(str,"+");

  if(strcmp(p,temp)!=0)
    {
      a=atoi(p);
      p=strtok(NULL,"+");
      b=atoi(p);
      printf("数値1：%d\n演算子：+\n数値2：%d\n",a,b);
      printf("計算結果：%d\n",a+b);
      return 0;
    }
    

  p=strtok(str,"-");
  // printf("%s\n",p);
  // printf("%d",strcmp(p,str));
  if(strcmp(p,temp)!=0)
    {
      a=atoi(p);
      p=strtok(NULL,"-");
      b=atoi(p);
      printf("数値1：%d\n演算子：-\n数値2：%d\n",a,b);
      printf("計算結果：%d\n",a-b);
      return 0;
    }
  
  
  p=strtok(str,"*");

  if(strcmp(p,temp)!=0)
    {
      a=atoi(p);
      p=strtok(NULL,"*");
      b=atoi(p);
      printf("数値1：%d\n演算子：*\n数値2：%d\n",a,b);
      printf("計算結果：%.1f\n",(double)a*b);
      return 0;
    }

  p=strtok(str,"/");

  if(strcmp(p,temp)!=0)
    {
      a=atoi(p);
      p=strtok(NULL,"/");
      b=atoi(p);
      printf("数値1：%d\n演算子：/\n数値2：%d\n",a,b);
      printf("計算結果：%.1f\n",(double)a/b);
      return 0;
    }
  
  printf("ERROR\n");
  return 0;
}
