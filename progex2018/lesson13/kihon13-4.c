#include <stdio.h>

typedef struct {
  int number;
  char Jname[255];
  int age;
  int height;
  int weight;
}Profile;

void sort(Profile temp[]);

void swap(Profile *a, Profile *b);

int main(void)
{
  Profile data[5] = {{0,"立命　太郎",20,175,70},{1,"草津　二郎",22,180,65},{2,"衣笠　花子",21,155,52},{3,"茨木　華子",20,162,55},{4,"滋賀　三郎",22,168,70}};


  sort(data);
  
  int i;

  for(i=0;i<5;i++)
    {
      printf("番号：%d\n",data[i].number);
      printf("名前：%s\n",data[i].Jname);
      printf("年齢：%d\n",data[i].age);
      printf("身長:%d\n",data[i].height);
      printf("体重:%d\n",data[i].weight);
      puts("");
    }

  return 0;
}

void swap(Profile *a, Profile *b)
{
  Profile temp = *a;
  *a = *b;
  *b = temp;
}

void sort(Profile temp[])
{
  int i,j;

  for(i=0;i<4;i++)
    {
      for(j=i+1;j<5;j++)
	{
	  if(temp[i].height < temp[j].height)
	    swap(&temp[i],&temp[j]);
	}
    }
}
