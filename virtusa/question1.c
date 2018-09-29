#include<stdio.h>
#include<stdlib.h>
int findLargestSubArray(int,int[]);
int SubArray(int ,int[] ,int,int);
int count, max;

int findLargestSubArray(int n, int arr[]){
    
    for(int i=0;i<n-1;i++){
        SubArray(n,arr,i,i+1);
    }
}

int SubArray(int n, int arr[], int start , int end){
    int one=0 , zero =0 ;
   // printf("\n Start : %d End : %d ",start,end);
    for(int itr = start;itr<=end;itr++){
        if(arr[itr]==1) one++;
        else zero++;
    }
    if(one == zero){
     count = (end - start)+1;
     if(count>max) max = count;
     //printf("\n Count = %d Max = %d start = %d end = %d ",count, max,start,end);
     }

    if(end+1 != n) SubArray(n,arr,start,++end);

    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   findLargestSubArray(n,arr);
    printf("%d",max);
}