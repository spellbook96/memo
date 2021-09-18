#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int i;
  FILE *fp;
  fp=fopen("numbers100K.dat","w"); 
  fprintf(fp,"100000\n");
  for(i=0;i<100000;i++)
    {
      fprintf(fp,"%d ",rand()%100+1);
    }

  fclose(fp);
  return 0;
}

