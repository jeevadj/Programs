#include<stdio.h>
int main(){
    int a=5;
for(int i=0;i<5;i++){
printf("%*.1s",a--,"*");
for(int j=0;j<i;j++){
  printf("*");}
  printf("\n");}}
