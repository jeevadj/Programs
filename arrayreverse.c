#include<stdio.h>
int main(){
    int i=0,d,arr[100],j=0,prev=0,k=0;
    char s;

    while(scanf("%d%c",&d,&s)){
        arr[i]=d;
        i++;
        if(s=='\n') break;

    }
    for(j=0;j<i;j++)
    if(arr[j]==0){

        for(k=j-1;k>=prev;k--){
            printf("%d ",arr[k]);
        }
        printf("%d ",arr[j]);
        prev=j+1;
    }
     for(k=j-1;k>=prev;k--){
            printf("%d ",arr[k]);
        }
}
