#include <stdio.h>

#define BUFFER_SIZE (256)               /*文字列用サイズ*/
#define NUM (5)                         /*データ数*/

struct Profile {                        /*構造体*/
	int number;                           /*番号*/
	char name[BUFFER_SIZE];               /*名前*/
	int age;                              /*年齢*/
	double height;                        /*身長*/
	double weight;                        /*体重*/
};

int main(void)
{

	int num;                              /*データの番号*/
	
	/*=構造体変数の定義と初期化=*/
	struct Profile profile[NUM]={{0,"立命　太郎",20,175.0,70.0},
															 {1,"草津　二郎",22,180.0,65.0},
															 {2,"衣笠　花子",21,155.0,52.0},
															 {3,"茨木　華子",20,162.0,55.0},
															 {4,"滋賀　三郎",22,168.0,55.0},};

	/*=初期登録情報の出力=*/
	printf("現在の登録情報は\n");                 
	for(num=0;num<NUM;num++){
		printf("番号: %d\n", profile[num].number);
		printf("名前: %s\n", profile[num].name);
		printf("年齢: %d\n", profile[num].age);
		printf("身長: %5.1f\n", profile[num].height);
		printf("体重: %4.1f\n", profile[num].weight);
		printf("\n");
	}

	return 0;
}
