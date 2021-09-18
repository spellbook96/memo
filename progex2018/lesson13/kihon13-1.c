#include <stdio.h>

typedef struct {
  char code[255];
  char name[255];
  int price;
}Product;

int main(void)
{
  Product product;
  
  printf("商品番号を入力して下さい：");
  scanf("%s",&product.code);
  printf("商品名を入力して下さい：");
  scanf("%s",&product.name);
  printf("価格を入力して下さい：");
  scanf("%d",&product.price);

  printf("商品番号：%s\n",product.code);
  printf("商品名：%s\n",product.name);
  printf("価格：%d\n",product.price);
  return 0;
}
