#include<stdio.h>
#include<stdlib.h>
char a[][4]
={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int main(){
    char s[40];
    int i=0,len;
    scanf("%s",s);

    len = strlen(s);
    for(i=0;i<len;i++){
        printf("%c",a[s[i]-48][0]);
    }


}
