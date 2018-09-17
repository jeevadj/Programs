#include<stdio.h>
#include<stdlib.h>
long long int fact(long long int num){
   if(num<=1){
      return 1; }
    return num*fact(num-1);
}
int main(){
 long long int n;
 scanf("%lld",&n);
 printf("%lld",fact(n));
 }
