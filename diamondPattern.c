#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,c;
    scanf("%d",&n);
    for(i=0;i<(2*n)-1;i++){
        // c=i;
        if(i>n-1) {c--;} else{c=i;}
        for(j=0;j<(n*2)-1;j++){
           
            // printf(" c--%d i--%d ",c,i);
            if(j>=(n-c-1)&&j<=(n+c-1))
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
}