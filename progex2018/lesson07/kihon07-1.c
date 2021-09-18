#include <stdio.h>

double multDouble(double,double);



int main(void){

  double a,b;
  do{
    printf("最初の数：");
    scanf("%lf",&a);
    printf("次の数：");
    scanf("%lf",&b);

    if(a==0||b==0) break;

    printf("%.2f\n",multDouble(a,b));
  }while(2);
  
  return 0;
}
double multDouble(double a,double b){
  return (a*b);

}
