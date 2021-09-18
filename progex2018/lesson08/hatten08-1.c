#include <stdio.h>

void mul(int [2][3], int [3][2], double [2][2]);

int main(void){

  int A[2][3]={{1,2,3},{4,5,6}};
  int B[3][2]={{2,3},{4,5},{6,7}};
  double C[2][2]={0};
  int i,j;

  mul(A,B,C);
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++)
      printf("%.0f ",C[i][j]);
    puts("");
  }

  return 0;
}


void mul(int A[2][3], int B[3][2], double C[2][2]){
  int i,j,f;
  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      for(f=0;f<3;f++)
	C[i][j]+=A[i][f]*B[f][j];
}
