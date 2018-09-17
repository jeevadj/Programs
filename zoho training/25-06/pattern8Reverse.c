#include<stdio.h>
#include<stdlib.h>
int main(){
char str[100],prev=' ';
char alphabet[50];
int count[50]={0};
int i=0,in=-1;
scanf("%s",&str);
int len=strlen(str);
while(i<len){
        if(prev!=str[i]){
            in++;
            prev=str[i];
            alphabet[in]=str[i];
            count[in]++;
          //  printf("\n%c-%d",alphabet[in],count[in]);
        }
        else{
            count[in]++;
          //  printf("\n%c-%d",alphabet[in],count[in]);
        }
       i++;
   }
for(i=0;i<=in;i++){
    printf("%c%d",alphabet[i],count[i]);
}
}
