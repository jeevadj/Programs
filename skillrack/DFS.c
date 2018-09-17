#include<stdio.h>
#include<stdlib.h>
int stack[1000],top=-1;
void push(int value){

   stack[++top]=value;
  // printf("pushed %d",stack[top]);

}
int pop(){
   // printf("\tpoped %d",stack[top]);
   return stack[top--];

}
int peek(){
   return stack[top];
}
int main(){
    int n,source,row,col;
    scanf("%d %d",&n,&source);
    int matrix [n+1][n+1] ,visited[n];

    for(row=1;row<=n;row++){
            visited[row]=0;
        for(col=1;col<=n;col++){
            scanf("%d",&matrix[row][col]);
        }
    }
    push(source);
    visited[source]=1;
    while(top>=0){
        int curr = pop();
        printf("\n %d ",curr);
        for(col=1;col<=n;col++){
            if(!visited[col]&& matrix[curr][col]==1){
                push(col);
                visited[col]=1;
            }
        }
    }
}
