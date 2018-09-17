#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[100],N,count=0,temp=0;
int c;
scanf("%s %d",&a,&c);
N=strlen(a)-1;
count=c-1;
while(1)
{
    if(count<N)
    {
        printf("%c-->%d\n",a[count],count);
        count+=c;

    }
    else if(count>N)
    {
        count=count-N-1;
    }
    if(count==N)
    {
        printf("%c-->%d\n",a[count],count);
        break;
    }
}


}



