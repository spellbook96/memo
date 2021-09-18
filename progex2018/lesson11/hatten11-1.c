#include <stdio.h>

void sort(int *array);

int main(void)
{
  int array[3];
  int i;

  for(i=0;i<3;i++)
    {
      printf("%d番目の数値を入力してください：",i+1);
      scanf("%d",&array[i]);
    }
  
  sort(array);
  printf("%d,  %d,  %d\n",array[0],array[1],array[2]);

  return 0;
}


void sort(int *array)
{
  int i,temp;
  int max=0;
  for(i=1;i<3;i++)
    {
      if(*(array+max)<*(array+i))
	{
	  *(array+max)=*(array+i);
	  max=i;
	}
    }
  
  printf("%d",max);
  switch (max)
    {
    case 0:
      temp=*(array+1);
      *(array+1)=*(array+2);
      *(array+2)=temp;
      break;
    case 1:
      temp=*(array+0);
      *(array+0)=*(array+2);
      *(array+2)=temp;
    case 2:
      temp=*(array+0);
      *(array+0)=*(array+1);
      *(array+1)=temp;
    }
	
	  
}
