#include<stdio.h>
#include <stdlib.h>
int flag=0;
int ifPower(long long int n){
    long long int bow=1;
    int cnt=0;

   printf("\n%d %d",n,2);
    while(bow<n){

          bow=bow*(long long int)2;
          cnt++;

          printf("\n%lld %d",bow,cnt);
    }
    printf("\n%lld %lld %d",bow,n,bow==n);
    if(flag==0){
        if(bow==n){
            printf("true");
        return 1;
    }else
        {
            printf("false");
        return 0;}
    }else{
         if(bow==n && cnt%2!=0){
            return 1;
         }else{
            return 0;}
}
}
int main()
{
long long int n;
scanf("%lld",&n);
if(n<0){flag=1;    n=n*(-1);}
printf("%lld",n);
int q=ifPower(n);
printf("\nq--%d",q);
if(q){
    printf("yes");
}else
    printf("no");


}
