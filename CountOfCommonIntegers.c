/* input sets:
4
12 23 34 45
23 34 12 56
34 45 56 67
12 23 34 45

5
1 2 3 4 2
6 7 8 9 0
1 2 3 4 5
6 7 8 9 0
9 2 3 4 5
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n ,i,j,count=0;
   scanf("%d",&n);
   int array[n][n];
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d",&array[i][j]);
       }
   }
   int mid = n/2;
   int ECond = (n&1)? mid+1:mid;
   int tempArray[1000]={0};

   for(i=0;i<ECond;i++){
       for(j=mid;j<n;j++){
           tempArray[array[i][j]]++;
        }
   }

   for(i = mid;i<n;i++){
       for(j=0;j<ECond;j++){
           if(tempArray[array[i][j]]>=1){
               count++;
               tempArray[array[i][j]]--;
               printf("\n %d-%d",array[i][j],tempArray[array[i][j]]);
           }
       }
   }
   printf("\n%d",count);
}
