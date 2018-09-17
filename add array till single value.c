#include<stdio.h>
int main()
{
    int flag=1;
    int n;
    scanf("%d",&n);
    int a[n];
    while(flag)
    {
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]+a[i+1];
        }
        n--;
    }
}
