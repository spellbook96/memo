#include <stdio.h>

int main(void){
  int a,b,c,min,mid,max;
  
  puts("3辺の長さを整数で入力して下さい");
  printf("1辺目：");
  scanf("%d",&a);
  printf("2辺目：");
  scanf("%d",&b);
  printf("3辺目：");
  scanf("%d",&c);
  
  max= (a >= b) ? a : b;                //並べ
  max= (max >= c) ? max : c;
  min= (a <= b) ? a : b;
  min= (min <= c) ? min : c;
  mid= a + b + c -max - min;

  if(max >= (min + mid))
    printf("3辺%d,%d,%dは三角形を作りません\n",max,mid,min);
  else if (max*max > (min*min + mid*mid)){
    printf("3辺%d,%d,%dは鈍角三角形です\n",max,mid,min);
    if(a == b || b == c || a == c)
      printf("さらに二等辺三角形です\n");
  }
  else if (max*max == (min*min + mid * mid))
    printf("3辺%d,%d,%dは直角三角形です\n",max,mid,min);
  else if(max*max < (min*min + mid*mid)){
    printf("3辺%d,%d,%dは鋭角三角形です\n",max,mid,min);
    
     if (a == b && b == c && a == c)
    printf("さらに正三角形です\n");
     else if(a==b || b==c || a==c)
       printf("さらに二等辺三角形です\n");
  }
 return 0;
}
