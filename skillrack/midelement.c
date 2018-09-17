#include<stdio.h>
#include <stdlib.h>

int main()
{
 char s[100];
 int n,l;
 scanf("%s %d",&s,&n);
 n=n/2;
 int len = strlen(s);
 if(len%2==0){
    l=len/2;
 }else{
     l=len/2+1;
 }
 s[l+n+1]='\0';
 printf("%s",s[l-n]);




}
