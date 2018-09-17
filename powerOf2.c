#include<stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    int count=0,flag=0;
    scanf("%lld",&n);
    if(n<0){
        flag =1;
        n=llabs(n);}
    while(n%2==0 && n>0)
    {
        printf("\nn->%lld",n);
        count++;
        n=n/2;
    }
   // count +=flag;
    printf("\n%d %d %lld",count,flag,n);

    if(flag){
        if(n==1 && count%2!=0){
            printf("yes");
        }else
            printf("no");
    }else{
      if(n==1){
        printf("yes");
      }else
        printf("no");
}
}
