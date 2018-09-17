#include<stdio.h>
int main(){
int n,binary[32],in=1,base=1;
scanf("%d",&n);
while(n){
    binary[in++]=n%2;
    n=n/2;
}
for(int i=1;i<in;i++)
{  if(!(i&1)) binary[i]=1;
   n+=(binary[i]*base);
   base=base*2;
}
printf("\n %d",n);
}
