#include <stdio.h>
#include <math.h>



double interest(double,int);



int main(void){

  int y;
  double r,n;
  printf("利率（r）：");
  scanf("%lf",&r);
  printf("金額（y）：");
  scanf("%d",&y);
  printf("期間（n）：");
  scanf("%lf",&n);
  y=y*interest(r,n)+0.5;
  printf("返済金額は%d円です\n",y);
    
  return 0;
}




double interest(double r,int n){

 
 

  return  pow((1+r/100),n);
}
