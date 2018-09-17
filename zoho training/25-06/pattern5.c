#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i=0,j=0,cnt=0;
scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(j==0){
                    cnt=i+1;
                printf("%d ",cnt);

                continue;
            }
            cnt+=(n-j+1);
            printf("%d ",cnt);
        }
        printf("\n");
    }

}
