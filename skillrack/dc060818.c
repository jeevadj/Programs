/*
HELLO67.98MADAM89.98
OUTPUT - 67.98
89.98
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[50],c[30];
    int  len, j=0,i=0,k;
    scanf("%[^\n]%*c",s);
    len = strlen(s);
    for(i=0;i<len;i++){
        if(s[i]=='.'){
            j=i-1;
            k=0;
            while(j>=0&&isdigit(s[j])){
                c[k++]=s[j--];
            }
            while(--k>=0)
                printf("%c",c[k]);
            j=i+1;
            printf(".");
            while(j<len&&isdigit(s[j]))
                printf("%c",s[j++]);
            s[j-1]='\0';
            i = j-1;
            printf("\n");
        }
    }
}
