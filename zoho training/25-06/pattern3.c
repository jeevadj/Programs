#include<stdio.h>
#include<stdlib.h>
int main(){
 int i=0,j=0,mid=0,n=0;
 char a=0;
 scanf("%d",&n);
 for(i=1; i<=n; i++)
    {
        mid=((i*2)/2)+i-1;
        for(j=1; j<=mid; j++)
        {   if(j&1)
                a='*';
            else
                a='A';
            if(j==1)
                printf("\n%*.1c",(n*2)-(i*2)+1,a);
            else
                printf("%1c",a);
        }
        for(j=mid-1; j>=1; j--)
        {
            if(j&1)
                a='*';
            else
                a='A';
            printf("%1c",a);
        }
    }
    for(i=n; i>=1; i--)
    {
        mid=((i*2)/2)+i-1;
        for(j=1; j<=mid; j++)
        {   if(j&1)
                a='*';
            else
                a='A';
            if(j==1)
                printf("\n%*.1c",(n*2)-(i*2)+1,a);
            else
                printf("%1c",a);
        }
        for(j=mid-1; j>=1; j--)
        {
            if(j&1)
                a='*';
            else
                a='A';
            printf("%1c",a);
        }
    }
}
