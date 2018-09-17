#include<stdio.h>
#include <stdlib.h>
long long int maths(char a,long long int b,long long int c){
    long long int z=1;
    switch(a){
        case '+' :  return b+c;

        case '-' : return b-c;

        case '*' : return b*c;

        case '/' : return b/c;

        case '^' :
                    while(c>0)
                    {
                      z*=b;
                      c--;
                    }
                   return z;
    }
}
int main()
{
    char s;
    long long int n,temp,result=0;
    scanf("%lld%c%lld",&n,&s,&temp);
    result=maths(s,n,temp);
    while(scanf("%c",&s)>0){


        if(s==10||s==13){
            break;
        }
        scanf("%lld",&n);
        result= maths(s,result,n);
        //printf("\n%d",result);


    }
    printf("\n%lld",result);

}
