#include <stdio.h>

int main(void)
{
	int num;

	FILE *fp1, *fp2;
	
	fp1=fopen("output02.txt","r");
	fp2=fopen("output02-4.txt","w");

  fscanf(fp1,"%d\n",&num);
  fprintf(fp2,"%d\n",num+10);
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}

