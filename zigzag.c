#include<stdio.h>
int main()
{
    char s[100],cnt=0;
    char c='i';
    int n,i,j;
    scanf("%s",&s);
    scanf("%d",&n);
    int len = strlen(s);
    int arr[len];
    for(i=0; i<len; i++)
    {
        if(c=='i')
            cnt++;
        else
            cnt--;
        if(cnt==n)
            c='d';
        if(cnt==1)
            c='i';
        arr[i]=cnt;
    }
    for(i=1; i<=n; i++)
        for(j=0; j<len; j++)
            if(arr[j]==i)
                printf("%c",s[j]);
}
