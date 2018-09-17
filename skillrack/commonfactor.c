#include<stdio.h>
#include <stdlib.h>
int n;
int no_of_factor(int value,int arr[n]){
    int index=(int)value/2;
    printf("\n in-%d v-%d",index,value);
    int count=0;
    for(index;index>1;index--){
        int cv=0;
        for(int i=0;i<n;i++){
            if(arr[i]%index==0){
                cv++;
        }
        if(cv==n){
             printf("\n in-%d ",index);
            count++;
        }
        }

    }
    return count;
}

int main()
{
  scanf("%d",&n);
  int arr[n],smallestelement=9999;
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      if(smallestelement>arr[i]){
          smallestelement=arr[i];
          printf("\n small-%d",smallestelement);
      }
  }
 printf("%d", no_of_factor(smallestelement,arr));


}
