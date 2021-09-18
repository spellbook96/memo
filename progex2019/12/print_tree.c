#include <stdio.h>

struct node {
  int key;
  struct node *parent, *left, *right;
};

  
void print_tree(struct node *node)
{
  int depth=0;

  show_tree(node, depth);

}

void show_tree(struct node *p, int depth)
{
  int i;
  if(p!=NULL)
    {
      show_tree(p->right,depth+1);
      for(i=0;i<depth;i++)
	printf("    ");
      
      printf("%d\n",p->key);

      show_tree(p->left,depth+1);
    }
}
