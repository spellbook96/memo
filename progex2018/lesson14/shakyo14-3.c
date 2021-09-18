#include <stdio.h>
#include <string.h>                   /*strcpy関数のために必要*/

#define BUFFER_SIZE (256)             /* 文字列用サイズ */

typedef struct {
	char name[BUFFER_SIZE];             /* 名前 */  
	char gen;                           /* 性別 */
	double eng;                         /* 英語の点 */
	double math;                        /* 数学の点 */
	double total;                       /* 英語と数学の合計点 */
} Score;

void total_score(Score *score)        /* 個人の合計点を計算する関数 */
{
	score->total = score->eng + score->math;
}

int main(int argc, char *argv[])      /*コマンドライン引数を受け取るため*/
{
  FILE   *fp;                         /* ストリームポインタ */
  char   filename[BUFFER_SIZE];       /* ファイル名 */

	Score score={};

	int    num=0;                       /* 読み取った人数 */

 	if (argc!=2) {
		/* コマンドライン引数の数(argc-1)が1つでない場合
   	  	エラーメッセージを出して終了 */
		fprintf(stderr,"Usage: ./shakyo14-3 [読み込むファイル名]\n");
	}
  else {
		/* コマンドライン引数の数が1つの場合
		   そのコマンドライン引数を読み込みファイル名へ */
		strcpy(filename,argv[1]);
		
		/* ファイルを読取モード"r"でオープン */
		if ((fp=fopen(filename,"r"))==NULL) { 
			/* 開けなかった場合エラーメッセージを出して終了 */
			fprintf(stderr,"ファイル%sをオープンできません．\n",filename);

		} else {
			/* 開けた場合はデータを読み込めるだけ読み込む */			
			while (fscanf(fp,"%s %c%lf%lf"
										,score.name,&score.gen,&score.eng,&score.math)==4) {

				total_score(&score);                     /* 合計点の計算 */
				
				printf("%2d %-14s %c  %5.1f\n"
								,num,score.name,score.gen,score.total);

				num++;                                   /* データ数の更新 */
			}

		}
		
    fclose(fp);
  }

  return 0;
}
