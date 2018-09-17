/*
6
**P***
****P*
*P*1**
*****P
***P*P
***PP2
*/

#include<stdio.h>
#include <stdlib.h>
int n;
int change(char s)
{
    switch(s)
    {
    case '1' :
        return 1;
    case '2' :
        return 2;
    case '3' :
        return 3;
    case '4' :
        return 4;
    case '5' :
        return 5;
    case '6' :
        return 6;
    case '7' :
        return 7;
    case '8' :
        return 8;
    case '9' :
        return 9;
    }
}
int Explode(char arr[n][n],int i,int j)
{
    int temp = change(arr[i][j]);
    int tempi=1;
    printf("\n Bow %d i--%d j--%d",temp,i,j);
    while(tempi<=temp)
    {   printf("\n tempi--%d",tempi);
        if(i!=0&&j!=0&&(!isdigit(arr[i-tempi][j-tempi]))){
            arr[i-tempi][j-tempi]='X';printf("\n i--%d j--%d",i-tempi,j-tempi);
        }

        if(i!=0&&(!isdigit(arr[i-tempi][j]))){
            arr[i-tempi][j] = 'X';printf("\n i--%d j--%d",i-tempi,j);
        }

        if(i!=0&&j!=n-1&&(!isdigit(arr[i-tempi][j+tempi]))){
           arr[i-tempi][j+tempi] = 'X'; printf("\n i--%d j--%d",i-tempi,j+tempi);
        }

        if(j!=0&&(!isdigit(arr[i][j-tempi]))){
            arr[i][j-tempi]='X';printf("\n i--%d j--%d",i,j-tempi);
        }

        if(j!=n-1&&(!isdigit(arr[i][j+tempi]))){
            arr[i][j+tempi]='X'; printf("\n i--%d j--%d",i,j+tempi);
        }

        if(i!=n-1&&j!=0&&(!isdigit(arr[i+tempi][j-tempi]))){
            arr[i+tempi][j-tempi]='X';printf("\n i--%d j--%d",i+tempi,j-tempi);
        }

        if(i!=n-1&&(!isdigit(arr[i+tempi][j]))){
            arr[i+tempi][j]='X';printf("\n i--%d j--%d",i+tempi,j);
        }

        if(i!=n-1&&j!=n-1&&(!isdigit(arr[i+tempi][j+tempi]))){
            arr[i+tempi][j+tempi]='X';printf("\n i--%d j--%d",i+tempi,j+tempi);
        }

        ++tempi;
    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    char a[n][n];
    for(i=0; i<n; i++)
        scanf("%s",&a[i]);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(isdigit(a[i][j]))
            {
                printf("\n %c",a[i][j]);
                Explode(a,i,j);

            }

        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%c",a[i][j]);

        printf("\n");
    }
}
