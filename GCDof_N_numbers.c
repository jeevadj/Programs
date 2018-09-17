#include<stdio.h>
#include<stdlib.h>
int n;
int GCD(int value,int arr[]){
    if(value>1){
    int count =0;
    for(int i=0;i<n;i++)
       if(arr[i]%value==0)
         count++;
    if(count==n){
       printf("%d",value);
       return 1;}
       else GCD(--value,arr);
    }
    else {
       printf("%d",value);
       return 1;}
}
int main(){
  int min=99999;
  scanf("%d",&n);
  int array[n];
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
    min = (min>array[i])?array[i]:min;
  }
  GCD(min,array);
}
