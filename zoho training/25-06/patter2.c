#include<stdio.h>
#include<stdlib.h>
int main(){
char a[]="ABCDE";
char b[]="DCBA";
int i=0;
for(i=0;i<5;i++){
printf("\n%*.*s",5,i+1,a);
printf("%.*s",i,&b[5-1-i]);
}}
