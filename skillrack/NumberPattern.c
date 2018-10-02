#include<stdio.h>
#include<stdlib.h>
#define p 3
int main(){

    int n,base=1;long long int temp=0;

    printf("%d",p);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n %*s%lld",(n-i)," ",(long long int)(base*base));
        // printf("\n %d",(n-i-1));
        base =  (base*10)+1;
        
    }
}