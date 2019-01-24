#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,cond;
    int i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        k = i+1;
        cond = (((i+1)*2)-1);
        printf("%*s",2*(n-i-1),"");
        for(j=0;j<cond;j++){
            printf("%d ",k);
            if(k<cond)
             k++;
            else
             k--;
        }
        printf("\n");
    }
}