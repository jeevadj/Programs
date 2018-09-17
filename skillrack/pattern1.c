#include<stdio.h>
int main()
{
    int n,index1,index2,count,b;
    scanf("%d",&n);
    count = 1;
    for(index1=1; index1<=n; index1++)
    {
        for(index2=1; index2<=index1; index2++)
        {
            if(index2==1)
            {
                count=index1;
                printf("%d ",count);
            }
            else
            {
                if(index2%2==0)
                {
                    count = count+((n-index1)*2+1);
                    printf("%d ",count);
                }
                else
                {
                    b=(index1-(index2-1))+(index1-index2);
                    count = count+b+1;
                    printf("%d ",count);
                }
            }
        }
        printf("\n");
    }
}
