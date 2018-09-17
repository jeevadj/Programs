#include<stdio.h>
#include<stdlib.h>
int arr[100];
int findCount(int a){
   int count=0;
   while(a!=0){

       arr[count]=a%10;
       count++;
       a/=10;
      }
      return count;
}
int main(){
int n=0,len=0,mid=0,i=0,j=0;
scanf("%d",&n);
len=findCount(n);


    mid=len/2;
    /*for(i=0;i<mid;i++){
        if(i!=0)
          printf("\n%*s",i," ");
        printf("%d",arr[len-i-1]);
        printf("%*s",len-1-(i*2)," ");
        printf("%d",arr[i]);
    }*/
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(i==j){
                printf("%d",arr[len-i-1]);
            }else if(i+j==(len-1)){
                printf("%d",arr[i]);
            }else{
                printf(" ");}
        }
        printf("\n");
    }



}
