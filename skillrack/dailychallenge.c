#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int start,end;
  scanf("%d",&n);
  int arr[n];
  for(int i=1;i<=n;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=1;i<=n;i++){
      if(i%2!=0){
          start=arr[i];
          end=arr[i+1];
          for(;start<end;start++){
              printf("%d ",start);
          }
      }else{
          start=arr[i+1];
          end=arr[i];
          for(;start>=end;start--){
              printf("%d ",start);
          }
      }
  }

}
