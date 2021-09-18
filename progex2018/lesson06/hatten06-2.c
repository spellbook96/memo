#include <stdio.h>
#define N 4

int main(void){
  
  int i,j;
  int array_a[N][N] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int array_b[N][N] = {};
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      array_b[j][N-1-i]=array_a[i][j];
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%2d ",array_b[i][j]);
    }
    printf("\n");
  }


  return 0;
}

