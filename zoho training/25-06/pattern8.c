#include<stdio.h>
#include<stdlib.h>
int main(){
char str[100],*p;
char alphabet[50];int count[50];
int i=0;
//printf("%d",' ');
scanf("%s",&str);

int len=strlen(str)-1;
while(len>=0){
        //printf("%c",str[len]);
    if(isalpha(str[len])){
        alphabet[i]=str[len];
        str[len]='\0';
        p=&str[len+1];
        count[i]=atoi(p);
        i++;
    }
    len--;
}
for(int j=i-1;j>=0;j--){
    for(int k=0;k<count[j];k++){
        printf("%c",alphabet[j]);
    }
}
}
