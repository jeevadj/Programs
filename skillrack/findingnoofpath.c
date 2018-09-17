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
                if(row!=R-1)
                {
                    check[row][column]+=check[row+1][column];
                }
                if(column!=C-1)
                {
                    check[row][column]+=check[row][column+1];
                }

            }
        }
    }

    for(row=0;row<R;row++){
        for(column=0;column<C;column++){
            printf("%d ",check[row][column]);

        }
        printf("\n");
    }
    printf("\n %d",check[0][0]);

}
