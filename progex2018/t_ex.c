#include<stdio.h>
int first=0;
int last=3;
int top=4;
struct cell{
  int data;
  int next;
  int prev;
}celldata[10];
struct cell celldata[10];
void list_init(){
  celldata[0].data=1;
  celldata[0].next=1;
  celldata[0].prev=-1;

  celldata[1].data=2;
  celldata[1].next=2;
  celldata[1].prev=0;
  
  celldata[2].data=3;
  celldata[2].next=3;
  celldata[2].prev=1;
  
  celldata[3].data=4;
  celldata[3].next=-1;
  celldata[3].prev=2;
  int first=0;
  int last=3;
  int top=4;
}
void printall(){
  int now=first;
  while(now!=-1){
    printf("%d",celldata[now].data);
    now=celldata[now].next;
  }
  printf("\n");
}
void printall_rev(){
  int now=last;
  while(now!=-1){
    printf("%d",celldata[now].data);
    now=celldata[now].prev;
    }
  printf("\n");
}
void del(int n){
  if(n==-1)
    return;
  if (celldata[n].next == -1)
    return;

  if ( celldata[celldata[n].next].next == -1){
    celldata[n].next =-1;
    last--;
  }
  else{
    celldata[n].next++;
    celldata[n+2].prev--;
  }
}
 
int main(){
  int i,n;
  list_init();
  scanf("%d",&n);
  del(n);
  printall();
  printall_rev();
  return 0;
}
