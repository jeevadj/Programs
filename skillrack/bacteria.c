#include<stdio.h>
int a[60][60],r,c,ji,ki,jj,kj,temp[60][60];
int main()
{
    int t,g,i,j,k;
    scanf("%d",&t);
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d %d",&ji,&ki);
    scanf("%d %d",&jj,&kj);
    scanf("%d",&g);
//    for(i=0;i<1;i++)
//    {
        generation();
    //}
//    for(i=0;i<r;i++)
//    {
//        for(j=0;j<c;j++)
//        {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
}
int generation()
{
    int j,k,cnt;
    for(j=0;j<r;j++)
    {
        for(k=0;k<c;k++)
        {
            if(a[j][k]==0)
            {
                cnt=0;
                if(a[j][k+1]==1&&k<c){cnt++;printf("%d",a[j][k+1]);}
                if(a[j][k-1]==1&&k>0){cnt++;printf("%d",a[j][k-1]);}
                if(a[j+1][k]==1&&j<r){cnt++;printf("%d",a[j+1][k]);}
                if(a[j-1][k]==1&&j>0){cnt++;printf("%d",a[j-1][k]);}
                if(a[j-1][k-1]==1&&j>0&&k>0){cnt++;printf("%d",a[j-1][k-1]);}
                if(a[j+1][k+1]==1&&j<r&&k<c){cnt++;printf("%d",a[j+1][k+1]);}
                if(a[j-1][k+1]==1&&j>0&&k<c){cnt++;printf("%d",a[j-1][k+1]);}
                if(a[j+1][k-1]==1&&j<r&&k>0){cnt++;printf("%d",a[j][k+1]);}
                printf("B%d ",cnt);
                if(ji<=cnt&&cnt<=jj)
                    temp[j][k]=1;
                else
                    temp[j][k]=0;
            }
            else
            {
                cnt=0;
                if(a[j][k+1]==0&&k<c){cnt++;printf("%d",a[j][k+1]);}
                if(a[j][k-1]==0&&k>0){cnt++;printf("%d",a[j][k-1]);}
                if(a[j+1][k]==0&&j<r){cnt++;printf("%d",a[j+1][k]);}
                if(a[j-1][k]==0&&j>0){cnt++;printf("%d",a[j-1][k]);}
                if(a[j-1][k-1]==0&&j>0&&k>0){cnt++;printf("%d",a[j-1][k-1]);}
                if(a[j+1][k+1]==0&&j<r&&k<c){cnt++;printf("%d",a[j+1][k+1]);}
                if(a[j-1][k+1]==0&&j>0&&k<c){cnt++;printf("%d",a[j-1][k+1]);}
                if(a[j+1][k-1]==0&&j<r&&k>0){cnt++;printf("%d",a[j][k+1]);}
                printf("C%d ",cnt);
                if(ki<=cnt&&cnt<=kj)
                    temp[j][k]=0;
                else
                    temp[j][k]=1;
            }
        }
    }
    printf("\n");
    for(j=0;j<r;j++)
    {
        for(k=0;k<c;k++)
        {
            a[j][k]=temp[j][k];
            printf("%d ",a[j][k]);
        }
        printf("\n");
    }
}
