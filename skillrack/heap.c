#include<stdio.h>
#define SIZE 100

void buildMaxHeap(int arr[],int size){
    for(int index=size/2-1;index>=0;index--){
        maxHeapify(arr,size,index);

    }
  }
  void maxHeapify(int arr[],int size,int parent){
      int largest=parent;
      if(((2*parent+1)<size)&&arr[2*parent+1]>arr[largest]){
          largest=2*parent+1;
      }
      if((2*parent+2)<size && arr[2*parent+2]>arr[largest]){
        largest=2*parent+2;
      }
      if(largest != parent){
        int temp = arr[largest];
        arr[largest]= arr[parent];
        arr[parent]=temp;

        maxHeapify(arr,size,largest);
      }
  }
  void shiftUp(int arr[],int currn){
      int parent = (currn-1)/2;
      if(arr[currn]>arr[parent]){
        int temp = arr[currn];
        arr[currn]=arr[parent];
        arr[parent]=temp;
        shiftUp(arr,parent);
      }}
  void insert(int arr[],int *size , int val){
           if((*size)+1<=SIZE){
            (*size)++;
            arr[(*size)-1]=val;
            shiftUp(arr,(*size)-1);
           }}
int main(){
int n,index,insertnum;
scanf("%d",&n);
int arr[n];
for(index=0;index<n;index++){
scanf("%d",&arr[index]);
}
buildMaxHeap(arr,n);
scanf("%d",&insertnum);
insert(arr,&n,insertnum);


int n1=n;
for(index=0;index<n1;index++){
        if(n>0){
            printf("%d ",arr[0]);
            arr[0]=arr[n-1];
            n=n-1;
            maxHeapify(arr,n,0);
        }
}
}
