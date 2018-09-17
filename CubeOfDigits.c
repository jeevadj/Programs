#include<stdio.h>
#include <stdlib.h>
long long int print(long long int n){
  if(n>0){
    print(n/10);
    long long int rem = n%10;
    printf("%lld",rem*rem*rem);
  }
  return 0;
}
int main()
{
  long long int n;
  scanf("%lld",&n);
  print(n);
}
