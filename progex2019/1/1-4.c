#include <stdio.h>

typedef struct {
  char code[255],name[255];
  int price;
}gift;



int main(void)
{
  FILE *fp;
  int i;
  gift gifts[15];

  fp= fopen("gifts.dat","r");

  if ( fp == NULL)
    printf("fileはopen出来ませんでした");
  else
    {
      for(i=0;i<3;i++)
	{
	  fscanf(fp,"%s",gifts[i].code);
	  fscanf(fp,"%s",gifts[i].name);
	  fscanf(fp,"%d",&gifts[i].price);

	  printf("code:%s\n",gifts[i].code);
	  printf("name:%s\n",gifts[i].name);
	  printf("price:%d\n",gifts[i].price);
	  puts("");
	}

    }
  return 0;
}

/*
void read(FILE *fp,gift *gifts[])
{
  int i;
  for(i=0;i<3;i++)
    {
      fscanf(fp,"%s",gifts[i].code);
      fscanf(fp,"%s",gifts[i].name);
      fscanf(fp,"%f",gifts[i].price);
    }
}
*/
