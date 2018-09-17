#include<stdio.h>
#include<stdlib.h>
int GCD(int value,int a ,int b){

if(value>1)
    if(a%value==0&&b%value==0)
     return value;
    else
      return GCD(value-1,a,b);
return 1;
}
int main(){
int a,b,value;
printf("Enter the value of a and b : ");
scanf("%d %d",&a,&b);
value=(a>b)?b:a;
printf("%d",GCD(value,a,b));
}
