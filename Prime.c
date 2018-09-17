#include<stdio.h>
#include<Math.h>
long long int n;

int main()
{
     int Cond=1;
    scanf("%lld",&n);
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            Cond = 0;
            break;
        }
    }
    if(Cond) printf("Prime Number");
    else printf("Not Prime Number");
}
