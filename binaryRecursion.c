#include<stdio.h>

long long int binary(long long int n,long long int base){
  if(n>0) return (((n%2)*base)+binary(n/2,base*10));
}

int main(){
 long long int n;
 scanf("%lld",&n);
 printf("%lld",binary(n,1));
 }
