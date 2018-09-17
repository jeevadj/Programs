#include<stdio.h>
#include <stdlib.h>
int r,c;
int largestNumber(int arr[r][c],int row,int col){
    int max=0,i;
   printf("\nbefore %d--%d--%d",arr[row][col],row,col);
    for(i=row+1;i<r;i++){
        if(arr[i][col]>max){
            if(arr[i][col]%2!=0)
              max = arr[i][col];
        }
    }
    if(max==0&&i==r){
        arr[row][col]='*';

    }else{
        arr[row][col]=max;

    }
 printf("\nafter %d--%d--%d",arr[row][col],row,col);

}
int main()
{
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){

             printf("\n %d-%d-%d",arr[j][i],j,i);
             largestNumber(arr,j,i);
        }

        }
        printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==42)
            printf("%c ",arr[i][j]);
            else
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}
