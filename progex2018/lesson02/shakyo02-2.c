#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp=fopen("output02-2.txt","w");

  fprintf(fp,"%d\n",3*2);
	
	fclose(fp);

	return 0;
}

