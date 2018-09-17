#include<stdio.h>
#include<stdlib.h>
int main(){
char s[1000];
int len;
scanf("%[^\n]%n",s,&len);
while(len>=0){
    if(s[len]==' '){
        s[len]='\0';
        printf("%s ",&s[len+1]);
    }
    len--;
}
printf("%s",s);
}
