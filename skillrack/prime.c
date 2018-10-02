#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n,flag=0;
    for(i=2;i<=100;i++){
        for(n=2;n<i&&!flag;n++){
            if(!(i%n)){
                flag = 1;
            }
        }
        if(!flag) 
         printf("\n %d is Prime",i);
         flag= 0;
       
    }
}