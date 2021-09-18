#include <stdio.h>
#include <stdlib.h>
int num=0;

struct node {
  int key;
  struct node *parent, *left, *right;
};

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

void print_tree(struct node *node)
{
  int depth=0;

  show_tree(node, depth);

}


struct node *new_node(int key)
{
  struct node *p;

  p=(struct node*)malloc(sizeof(struct node));
  p->key=key;
  p->left=NULL;
  p->right=NULL;
  p->parent=NULL;
  return p;
}

int insert(int key, struct node *root);

int member(int key, struct node *node);

int main(void)
{
  struct node *root=NULL;
  root=new_node(0);
  int key;
  int temp=2;
  while(2){
    printf("挿入するキーを入力してください：");
    scanf("%d",&key);
    if(key<=0)
      break;
    temp=insert(key,root);
    if(temp==0)
      printf("ERROR：すでに同じ値がある\n");

    print_tree(root);
  }
  return 0;
}

int insert(int key, struct node *root)
{
  struct node *p=root;
  if (p->key==0)
    {
      p->key=key;
      p->left=new_node(0);
      p->right=new_node(0);

      return 1;
    }
  else{
    
    while(1){
      if(p->key==0)
	{
	  p->key=key;
	  p->left=new_node(0);
	  p->right=new_node(0);
	  while(p!=NULL)
	    p=p->parent;
	  return 1;
	}
      if(p->key==key)
	return 0;
      if(p->key>key)
	p=p->left;
      else
	p=p->right;
    }
  }
    
}

int mumber(int key, struct node *node)
{
  while(1){
    if(node==NULL)
      return 0;
    if(node->key==key)
      return 1;
    if(node->key>key)
      node=node->left;
    else
      node=node->right;
  }
    
}
