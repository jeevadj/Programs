#include<stdio.h>
#include<stdlib.h>
//char str2[100];
int main(){
    char str[100];
    scanf("%[^\n]",&str2);
    int len=strlen(str2)-1;
    while(--len>=0){
        printf("%c",str2[len]);
    }
//    str=str2;
//    printf("%s",str);
}
