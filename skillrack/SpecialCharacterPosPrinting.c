#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char *str;
    int len;
    str = malloc(sizeof(char *));
    scanf("%[^\n]%n",str,&len);
    int i=0;
    while(i<len){
        if(isalpha(str[i])||isdigit(str[i])){
            printf("\n%c",str[i]);
        }else{
            if(str[i]!=' ')
            printf("\n%c-%d",str[i],i);
        }
        i++;
    }
}