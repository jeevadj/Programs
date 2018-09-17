#include<stdio.h>
#include <stdlib.h>
int infinity=9999;
int main()
{
    int m,n,a[50],b[50],f=0,i,j,t=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j]&&f==0)
            {
                t=1;
                f=1;
                b[j] = infinity;
                printf("%d ",a[i]);
            }
            if(a[i]==b[j])
            b[j]=infinity;

        }
        f=0;
    }
    if(t==0)
    printf("Invalid");
}
