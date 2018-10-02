#include<stdlib.h>
#include<stdio.h>

int main(){
    int n,n1,sum=0,count,temp,i,temp1=1;
    scanf("%d%n",&n,&count);
    n1= n;
    while(n){
        temp = n%10;
        for(i=0;i<count;i++)
            temp1 *=temp;
         //   printf(" %d",temp1);
        sum +=temp1;
        n /=10;
        temp1 = 1;  
    }
  //  printf(" %d",sum);
   if(n1 == sum){
       printf("It is an armstrong number");
   }else{
       printf("It is not an armstrong number");
   }
}