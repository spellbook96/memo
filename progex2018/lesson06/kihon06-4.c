#include <stdio.h>


int main(void)
{
  int score_rank[2][10]={{67,48,56,97,30,88,76,55,66,78},{}};

  int rank,i,j;
  rank=1;

  for(i=100;i>=0;i--){
    for(j=0;j<10;j++){
      if(score_rank[0][j]==i){
	score_rank[1][j]=rank;
	rank++;
	break;
      }
    }
  }

  for(i=0;i<10;i++){
    printf("%d %d \n",score_rank[0][i],score_rank[1][i]);
  }
  return 0;
}
