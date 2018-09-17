#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n , i ,j,count =1;
   char c,flag=1;
   scanf("%d\n",&n);
   char a[n][n];
   int mid = (n&1)?((n*n)/2)+1:(n*n)/2;
  for(i=0;i<n;i++)
     for(j=0;j<n;j++){
      scanf("%c%c",&a[i][j],&c);
         if(c==10||c==13)scanf("\n");
     }
     j=0;
   for(i=0;i<n&&flag;i++){
       count = 1;
       while(count%(n+1)!=0&&(count+(i*n)<=mid)){

           if(j==0) c='i';
           if(j==n) c='d';
         //  printf("\n %d--%d--%d--%c--%d",i,j,n-j-1,c,count);
           if(a[i][j]==a[n-i-1][n-j-1]){
               printf("%c ",a[i][j]);
           }
           (c=='i')?++j:--j;
           count++;
       }
   }
}
