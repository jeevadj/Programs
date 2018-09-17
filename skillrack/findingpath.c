#include<stdio.h>
int main()
{
    int R,C,row,column;

    scanf("%d %d",&R,&C);
    char matrix[R][C],temp[2];
        int check[R][C];
    for(row=0; row<R; row++)
    {
        for(column=0; column<C; column++)
        {
            scanf("%s",temp);
            matrix[row][column]=temp[0];
            check[row][column]=0;
        }
    }

    //memset(check,0,sizeof(check));
    check[R-1][C-1]=1;
    for(row=R-1; row>=0; row--)
    {

        for(column=C-1; column>=0; column--)
        {
            if(matrix[row][column]=='*')
            {
                if(row!=R-1 && check[row+1][column]==1)
                {
                    //   printf(" row %c %c",matrix[row][column],matrix[row][column+1]);
                    check[row][column]=1;
                   // printf("%d\n",check[row][column]);*
                }
                if(column!=C-1&& check[row][column+1]==1)
                {
                    //printf(" column %c %c",matrix[row][column],matrix[row+1][column]);
                    check[row][column]=1;
                }
                printf("\n%d %d %d",row,column,check[row][column]);
            }
        }
    }

    if(check[0][0]==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


}
