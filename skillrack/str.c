#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s1[10],s2[10];
    int len1,len2,sl,i;
    sl=0;
    scanf("%s %s",&s1,&s2);
    len2=strlen(s2);
    len1=strlen(s1);
    for(i=0;i<len1;i++){
        if(s1[i]==s2[0]){
            sl=i;
            break;
        }
    }
    printf("%s",s1);
    for(i=1;i<len2;i++){
        printf("\n %*.5s",sl,s2[i]);
    }


}
