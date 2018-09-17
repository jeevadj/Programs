#include<stdio.h>
int n,row,column,flag;
int print(int arr[n][n],int i,int j,char a)
{
    if(a=='i')
    {
        for(i; i<n; i++)
        {
            if(j==column&&flag==1)
                return;
            printf("%d ",arr[i][j]);
        }
        flag=1;
        if(j+1==n)
            j=-1;
        print(arr,i-1,j+1,'d');

    }
    else
    {
        for(i; i>=0; i--)
        {
            if(j==column&&flag==1)
                return;
            printf("%d ",arr[i][j]);
        }
        flag=1;
        if(j+1==n)
            j=-1;
        print(arr,i+1,j+1,'i');
    }
}
int main()
{
    int i,j,tempRow;
    char a;
    scanf("%d",&n);
    int arr[n][n];
    printf("\n Enter the row,column : ");
    scanf("%d,%d",&row,&column);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(j==0)
                arr[i][j]=i+1;
            else
                arr[i][j]=arr[i][j-1]+n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    if(row==0)
    {
        a='i';
        printf("\n%d ",arr[row][column]);
        tempRow=row+1;
    }
    else if(row==n-1)
    {
        a='d';
        printf("\n%d ",arr[row][column]);
        tempRow=row-1;
    }
    print(arr,tempRow,column,a);
}


/*#include<stdio.h>
int n,row,column;
int print(int arr[n][n],int i,int j,char a){
  if(a=='i'){
    for(i;i<n;i++){
            if(i==row&&j==column) return;
        printf("%d ",arr[i][j]);
    }
    if(j+1==n-1) j=-1;
    print(arr,i-1,j+1,'d');

  }else{
      for(i;i>=0;i--){
            if(i==row&&j==column) return;
        printf("%d ",arr[i][j]);
    }
    if(j+1==n-1) j=-1;
    print(arr,i+1,j+1,'i');
  }
}
int main()
{
    int i,j,tempRow;
    char a;
    scanf("%d",&n);
    int arr[n][n];
    printf("\n Enter the row,column : ");
    scanf("%d,%d",&row,&column);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(j==0)
               arr[i][j]=i+1;
            else
                arr[i][j]=arr[i][j-1]+n;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    if(row==0) {a='i';printf("\n%d ",arr[row][column]);tempRow=row+1;}
    else if(row==n-1) {a='d';printf("\n%d ",arr[row][column]);tempRow=row-1;}
    print(arr,tempRow,column,a);
}

*/
