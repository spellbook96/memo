#include <stdio.h>

int main(void){

  int i=2, j, no=10000, sum,temp;
  int max =0;
	
while(i++<=no){
	sum=1;
	for(j=2;j<i;j++){
		if(i%j==0){
			sum+=j;
		}
	}
	if(i==sum){
	  temp=i;
	  if(temp>=max)
	    max=temp;
	}
 }
  printf("１０００を越えない最大の完全数は%dです",max);
 return 0;
}

