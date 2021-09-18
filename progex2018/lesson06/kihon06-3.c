#include <stdio.h>
#define p 2 
#define q 3
#define r 4

int main(void)
{
  int A[p][q]={{2,4,8},{7,3,3}};
  int B[q][r]={{4,5,2,7},{5,6,2,8},{1,2,3,6}};
  int C[p][r]={0};
  int i,j,h,k;
  for(i=0;i<p;i++){
    for(j=0;j<r;j++){
      for(h=0;h<q;h++){
	
	C[i][j]+=A[i][h]*B[h][j];
	
      }
    }
  }
  
  puts("行列A＝");
  for(i=0;i<p;i++){                    //A
    for(j=0;j<q;j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }

  puts("行列B＝");
  for(i=0;i<q;i++){                     //B
    for(j=0;j<r;j++){
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  
  puts("行列A＊B＝");
  for(i=0;i<p;i++){                     //C
    for(j=0;j<r;j++){
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
