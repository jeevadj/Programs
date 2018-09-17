#include<stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
int n,i,diff=INT_MAX;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
    if(abs(diff)>abs(arr[i]-arr[i-1]))
      diff = arr[i]-arr[i-1];
}
printf("\n%d\n",diff);
for(i=0;i<n-1;i++){
    int temp = arr[i+1]-diff;
    if(temp !=arr[i]){
        printf("%d",temp);
        break;
    }
}



}
