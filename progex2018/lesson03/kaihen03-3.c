#include<stdio.h>

int main(void)
{
        int a, b, c;          /* 整数の変数としてaとbを定義する */
	
        printf("整数aを入力して下さい：");          /* 質問を画面に印字 */
        scanf("%d", &a);                        /* aを整数として入力 */
        printf("整数bを入力して下さい：");          /* 質問を画面に印字 */
        scanf("%d", &b);                        /* bを整数として入力 */
	printf("整数cを入力して下さい：");
	scanf("%d",&c);
        printf("a=%d\n", a);                    /* aを画面に印字 */
        printf("b=%d\n", b);                    /* bを画面に印字 */
	printf("c=%d\n", c);
        printf("平均=%.3f\n", (double) (a+b+c)/3);
                                /* aとbの平均を実数として計算し、画面に印字 */

        return 0;
}
