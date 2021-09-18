#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *parent, *left, *right;
};

void print(int key,int depth);

struct node *new_node(int key)
{
  struct node *p;

  p=(struct node*)malloc(sizeof(struct node));
  p->key=key;
  p->left=NULL;
  p->right=NULL;
  return p;
}

void print_tree(struct node *node);

int main(void)
{
  struct node *root, *n[10];

  n[0]=new_node(4);
  n[1]=new_node(7);
  n[2]=new_node(9);
  n[3]=new_node(12);
  n[4]=new_node(15);
  n[5]=new_node(18);
  n[6]=new_node(21);
  n[7]=new_node(22);
  n[8]=new_node(25);
  n[9]=new_node(31);

  root=n[5];
  
  n[0]->left=new_node(0);
  n[0]->right=n[1];
  n[0]->parent=n[2];
  
  n[1]->left=new_node(0);
  n[1]->right=new_node(0);
  n[1]->parent=n[0];
  
  n[2]->left=n[0];
  n[2]->right=n[3];
  n[2]->parent=n[5];

  n[3]->left=new_node(0);
  n[3]->right=n[4];
  n[3]->parent=n[2];

  n[4]->left=new_node(0);
  n[4]->right=new_node(0);
  n[4]->parent=n[3];

  n[5]->left=n[2];
  n[5]->right=n[7];
  n[5]->parent=NULL;

  n[6]->left=new_node(0);
  n[6]->right=new_node(0);
  n[6]->parent=n[7];

  n[7]->left=n[6];
  n[7]->right=n[9];
  n[7]->parent=n[5];

  n[8]->left=new_node(0);
  n[8]->right=new_node(0);
  n[8]->parent=n[9];

  n[9]->left=n[8];
  n[9]->right=new_node(0);
  n[9]->parent=n[7];

  print_tree(root);

  int i;
  for(i=0;i<10;i++)
    free(n[i]);
  
  
  return 0;
}


void print_tree(struct node *node)
{
  int depth=0;
  int i,c;
  struct node *p,*temp;
  p=node;
  c=0;
  while(c<2)
    {
      while(p->right!=NULL)
	{
	  p=p->right;
	  depth++;
	}
      print(p->key,depth); 
     temp=p->parent;

      depth--;

      printf("###");
      //    print(temp->key,depth);
      //    p->left;
      depth++;
      c++;
    }
}

void print(int key,int depth)
{
  int i;
  for(i=0;i<=depth;i++)
    printf("  ");
  printf("%d",key);
  printf("--depth:%d",depth);
  puts("");
}
