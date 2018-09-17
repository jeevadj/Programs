#include<stdio.h>
int in;
struct set{
  int start,end;
}head[20];

struct newset{
int start,end;
}newHead[20];
int compare(struct set node, struct set node1){
    //printf("\n %d %d %d %d",node.start,node.end,node1.start,node1.end);
    if(node1.start>node.start&&node1.start<node.end){
        newHead[in].start = node.start;
        newHead[in].end = node1.end;
      //  printf("\n newHead %d %d %d",newHead[in].start,newHead[in].end,in);
        in++;
        return 1;
    }
    else if(node1.start==node.end){
        newHead[in].start = node.start;
        newHead[in].end = node1.end;
      //  printf("\n newHead %d %d %d",newHead[in].start,newHead[in].end,in);
        in++;
        return 1;
    }
    newHead[in].start = node.start;
    newHead[in].end = node.end;
    in++;
    return 0;
 }
int main(){
  int a,b,i=0,j;
  char s;
  while(scanf("{%d,%d}%c",&a,&b,&s)>0){
      // printf("\n a : %d b : %d ",a,b);
       head[i].start = a;
       head[i].end = b;
       i++;
       if(s=='\n') break;
  }
  for(j=0;j<i-1;j){
        //printf("\n %d ",j);
       // printf("%d ",++j);

        if(compare(head[j],head[j+1])){
            j+=2;
        }else{
        j+=1;}
  }
  if(j==i-1){
    newHead[in].start = head[j].start;
    newHead[in].end = head[j].end;
    in++;
  }
  printf("\n j : %d ",j);
  for(int j=0;j<in;j++){
    printf("\n {%d,%d}",newHead[j].start,newHead[j].end);
  }
}
