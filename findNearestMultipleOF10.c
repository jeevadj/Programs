#include<stdio.h>

int main()
{
   long long int number ;
   scanf("%lld",&number);
   int rem = number %10;
   if(rem<=5){
       number = number - rem;
   }else{
       number = number + (10-rem);
   }
   printf("%lld",number);
}
