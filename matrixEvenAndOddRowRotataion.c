#include<stdio.h>
int main()
{
    int n,i,j,rotationValue;
    scanf("%d %d",&n,&rotationValue);
    while(rotationValue>=n){
        rotationValue %=n;
    }
    int a[n][n];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);

    printf("\n\n OUTPUT : \n");
    for(i=0; i<n; i++)
    {
        if(i&1)
        {
            //odd
            int ctr =0;
            j=0+rotationValue;  //1 is the rotation value
            while(ctr<n){
                printf("%d ",a[i][j++]);
                if(j==n) j=0;
                ctr++;
            }

        }
        else{
            //even
            int ctr =0;
            j=n-rotationValue;
            while(ctr<n){
                printf("%d ",a[i][j++]);
                if(j==n){
                    j=0;
                }
                ctr++;
            }
        }
        printf("\n");
    }
}
