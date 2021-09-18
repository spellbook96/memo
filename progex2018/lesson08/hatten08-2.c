#include <stdio.h>

#define MAX (15)

void matrix_product(int mat_x[3][3], int mat_y[3][3], int mat_z[3][3]);

int main(void)
{
  int n=MAX;
  int i,j;
  
  int mat_x[3][3]={{1,0,-1},{1,2,1},{2,2,3}}; 
  int mat_y[3][3]={{1,0,-1},{1,2,1},{2,2,3}}; 
  int mat_z[3][3]={0};

  do
    {
      printf("nの値を入力してください（最大%d）：",n);
      scanf("%d",&n);
      
      if(n>=1 && n<=MAX)
	break;
      else if(n<1)
	{
	  n=MAX;
	  printf("nは１以上にしてください\n");
	}     
      else
	{
	  n=MAX;
	  printf("nは%d以下にしてください\n",n);
	}
    }while(2);

  if(n==1)
    {
      for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	    printf("%d  ",mat_x[i][j]);
	  puts("");
	}
    }
  else
    {
      for(i=1;i<n;i++)
	matrix_product(mat_x, mat_y, mat_z);
	
      for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	    printf("%d  ",mat_z[i][j]);
	  puts("");
	}
    }
  return 0;
}


void matrix_product(int mat_x[3][3], int mat_y[3][3], int mat_z[3][3])
{
  int i,j,f;
  
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      mat_z[i][j]=0;

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      for(f=0;f<3;f++)
	mat_z[i][j]+= mat_x[i][f] * mat_y[f][j];

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      mat_x[i][j]=mat_z[i][j];
  
}

  
