#include<stdio.h>
int main(){
    char s[50];
    int len,i;
    scanf("%s%n",s,&len);
    for(i=0;i<len;i++)
        printf("\n%*.*s",len,i+1,s);

}