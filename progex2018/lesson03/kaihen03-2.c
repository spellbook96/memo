#include<stdio.h>

int main(void)
{
        int a, b=4;             /* 整数の変数としてaとbを定義する。bに４を代入する */

        printf("整数aを入力して下さい：");          /* 質問を画面に印字 */
        scanf("%d", &a);  	/* aを整数として入力 */
	printf("整数bを入力して下さい：");
	scanf("%d", &b);
        printf("a=%d\n", a);                    /* 入力した結果を画面に印字 */
        printf("b=%d\n", b);                    /* bを画面に印字 */

        printf("a+b=%d\n", a+b);                /* a+bを計算し、画面に印字 */
        printf("a-b=%d\n", a-b);                /* a-bを計算し、画面に印字 */
        printf("a*b=%d\n", a*b);                /* aとbの積を計算し、画面に印字 */
        printf("a/b=%d\n", a/b);                /* aをbで割った商を計算し、画面に印字 */
        printf("a%%b=%d\n", a%b);               /* aをbで割った余を計算し、画面に印字 */
        printf("a/b=%f\n", (double) a/(double) b);
        /* aをbで割った結果を実数として計算し、画面に印字 */

        return 0;
}
