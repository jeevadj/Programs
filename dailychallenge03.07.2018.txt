#include<stdio.h>
int main(){
char s1[1000],s2[1000],index=-1;
scanf("%s",&s1);
scanf("%s",&s2);
int len1=strlen(s1);
int len2=strlen(s2);
while(len1-1>=0){
    if(s1[len1-1]==s2[0]){
        index=len1-1;
        break;
    }
    len1--;
}
len1=strlen(s1);
printf("%s\n",s1);
for(int i=1;i<len2;i++){
    for(int j=0;j<len1;j++){
        if(j==index)
           printf("%c",s2[i]);
        else
           printf("-");
    }printf("\n");
}
}
