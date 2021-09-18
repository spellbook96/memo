#include <stdio.h>

int main(void)
{
  FILE *fp;
  char name[256];
  char gen;
  int math, eng;

  if((fp=fopen("Seiseki.dat","r")) == NULL)
    {
      printf("ファイルオープンできません\n");
    }
  else
    {
      while (fscanf(fp,"%s %c %d %d",name,&gen,&eng,&math)==4)
      {
	printf("%15s %c %d %d\n",name,gen,eng,math);
      }
      fclose(fp);
    }
  
  return 0;
}
