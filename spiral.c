#include<stdio.h>
int row,r,c,column,totalElement;
int SpiralTraverse(int arr[10][10],char cv,char chose,int i,int j,int count)
{
    if(count<=totalElement)
    {
        if(chose=='r'&&cv=='i')
        {
            while(j<column)
            {
                printf(" %d ",arr[i][j]);
                j++;
                count++;
            }
            --column;

            SpiralTraverse(arr,'i','c',++i,--j,count);
        }
        if(chose=='c'&&cv=='i')
        {
            while(i<row)
            {
                printf(" %d ",arr[i][j]);
                i++;
                count++;
            }
            --row;
            SpiralTraverse(arr,'d','r',--i,--j,count);
        }
        if(chose=='r'&&cv=='d')
        {
            int temp = c-column-1;

            while(j>=temp)
            {
                printf(" %d ",arr[i][j]);
                j--;
                count++;
            }
            SpiralTraverse(arr,'d','c',--i,++j,count);
        }
        if(chose=='c'&&cv=='d')
        {
            int temp = i-j;

            while(i>0)
            {
                printf(" %d ",arr[i][j]);
                i--;
                count++;
            }
            SpiralTraverse(arr,'i','r',++i,++j,count);
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
