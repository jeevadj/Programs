#include<stdio.h>
#include<stdlib.h>
int main(){
char s[100];
int len=0,i=0 ;
scanf("%s",&s);
len=strlen(s);
for(i=0;i<len;i++){
   printf("\n%*.*s",len,i+1,s);
   }
}
