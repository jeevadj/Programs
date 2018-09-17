#include<stdio.h>
#include<stdlib.h>
int min = 1,n;

int function(int arr[n][n],int i,int j){
//printf("\n i--%d j--%d arr[%d][%d]--%d min--%d",i,j,i,j,arr[i][j],min);
if(i==n-1&&j==n-1){min = (min<arr[i][j])?arr[i][j]:min; return 0;}
else if(i==n-1) {min = (min<arr[i][j])?arr[i][j]:min;function(arr,i,++j);}
else if(j==n-1){ min = (min<arr[i][j])?arr[i][j]:min;function(arr,++i,j);}
else{
      if(arr[i][j+1]<arr[i+1][j]){
            min = (min<arr[i][j])?arr[i][j]:min;
         function(arr,i,++j);
      }else{
          min = (min<arr[i][j])?arr[i][j]:min;
          function(arr,++i,j);
    }
}


}
int main(){
char c;

scanf("%d",&n);
int arr[n][n],i,j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
   scanf("%d%c",&arr[i][j],&c);
}
}
function(arr,0,0);
printf("\n%d",min);
}

