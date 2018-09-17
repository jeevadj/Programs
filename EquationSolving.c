#include<stdio.h>
int eval(char *ev)
{
    int start=0;
    while(ev+start!='\0')
    {
        printf("%c ",*(ev+start));
    }
}
int main()
{
char *t;
int n,temp;
int result[101]={0},answer[101]={0};
    while(scanf("%d. %s %d",&n,&t[0],&temp))
    {
        printf("%s",&t[0]);
        result[n]=temp;
    }
}


