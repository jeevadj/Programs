#include<stdio.h>
#include<stdlib.h>
int queue[1000],front=-1,rear=-1;
int add(int value){
  if(front==-1 && rear == -1){
     queue[++front]=value;
     ++rear;
  }else{
      queue[++rear]=value;
  }
  printf("\n added %d %d %d",front,rear,queue[front]);

  }

int poll(){
   printf("\n poped %d",queue[front]);

   return queue[front++];

}
int peek(){
   return queue[front];
   }
int main(){
    int n,source,destination,row,col;
    //scanf("%d %d %d",&n,&source,&destination); //for particular destination
    scanf("%d %d ",&n,&source);  //for all destinations
    int matrix [n+1][n+1] ,visited[n+1],distance[n+1];

    for(row=1;row<=n;row++){
            visited[row]=0;
            distance[row]=0;
        for(col=1;col<=n;col++){
            scanf("%d",&matrix[row][col]);
        }
    }
    add(source);
    visited[source]=1;
    while(front<=rear){
        int curr = poll();
        printf("\n %d ",curr);
        for(col=1;col<=n;col++){
            if(!visited[col]&& matrix[curr][col]==1){
                    distance[col]=distance[curr]+1;
                add(col);
                visited[col]=1;
            }
        }
    }
    //printf("\n %d",distance[destination]);   //for particular destination
    for(int i=1;i<=n;i++){
        printf("\n %d %d",i,distance[i]);
    }
}
