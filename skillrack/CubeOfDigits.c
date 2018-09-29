#include<stdio.h>
#include<stdlib.h>

int main(){
    int in,len,DigitCount;
    scanf("%d%n",&in,&len);
    DigitCount = len;
    int arr[len];
    while(in){
        arr[--len] = in %10;
        in /= 10;
    }
    for(int i=0;i<DigitCount;i++){
        printf("%d",arr[i]*arr[i]*arr[i]);
    }
}
