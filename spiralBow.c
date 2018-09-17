#include<stdio.h>
int row,r,c,column,totalElement;
int SpiralTraverse(int arr[10][10],char cv,char chose,int i,int j,int count)
{
    if(count<=totalElement)
    {
        if(chose=='r'&&cv=='i')
        {

            //printf("\n ri--%d %d %d %d",arr[i][j],i,j,count);
            printf("%d ",arr[i][j]);
            if(j==column-1)
            {
                --column;
                SpiralTraverse(arr,'i','c',++i,j,++count);
            }
            else
                SpiralTraverse(arr,'i','r',i,++j,++count);
        }
        else if(chose=='c'&&cv=='i')
        {

            //printf("\n ci--%d %d %d %d",arr[i][j],i,j,count);
            printf("%d ",arr[i][j]);
            if(i==row-1)
            {
                --row;
                SpiralTraverse(arr,'d','r',i,--j,++count);
            }
            else
                SpiralTraverse(arr,'i','c',++i,j,++count);
        }
        else if(chose=='r'&&cv=='d')
        {
            int temp = c-column-1;
            //printf("\nrd--%d %d %d %d",arr[i][j],i,j,count);
            printf("%d ",arr[i][j]);
            if(j-1<temp)
                SpiralTraverse(arr,'d','c',--i,j,++count);
            else
                SpiralTraverse(arr,'d','r',i,--j,++count);
        }
        else if(chose=='c'&&cv=='d')
        {
            int temp = r-row;
            //printf("\ncd--%d %d %d %d",arr[i][j],i,j,count);
            printf("%d ",arr[i][j]);
            if(i-temp==0)
                SpiralTraverse(arr,'i','r',i,++j,++count);
            else
                SpiralTraverse(arr,'d','c',--i,j,++count);

        }
    }
    return;
}

int main()
{
    int arr[10][10];
    int i=0,j=0,temp;
    char a;
    while(scanf("%d%c",&temp,&a)>0)
    {

        arr[i][j] = temp;
        j++;
        if(a=='\n')
        {
            j=0;
            i++;
        }
        else if(a!=32)
        {
            break;
        }

    }
    r=row=i+1;
    c=column = j;

    totalElement = row*column;
    printf("\n Total Element : %d\n",totalElement);
    SpiralTraverse(arr,'i','r',0,0,1);
}

