#include<stdio.h>
#include<string.h>
int main(){
   char s[100];
   int len,i;
   scanf("%[^\n]",&s);
   len= strlen(s);
   printf("%d",len);
}
