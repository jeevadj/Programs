#include<stdio.h>
int checksum(int arr[10],int i,int len){
   int sum = 0,j=i+1,cnt = 0;
   if(j>=len){
        j=0;
      }
   while(j!=i){
      sum+=(arr[j++]*cnt++);
      if(j>=len) j=0;
   }
   sum += (arr[j]*cnt);
   return sum;
}
int main(){
int arr[100],index=0,temp;
char a;
int tempsum=0,max_sum=0;
while(scanf("%d%c",&temp,&a)){
    arr[index]=temp;
    index++;
    if(a=='\n') break;
}
int len = index;

for(int i=0;i<len;i++){
    tempsum =  checksum(arr,i,len);
    if(max_sum<tempsum)
        max_sum = tempsum;
}
printf("\n %d",max_sum);
}
