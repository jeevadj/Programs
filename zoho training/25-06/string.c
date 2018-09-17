#include<stdio.h>
#include<stdlib.h>
int main(){
char s[1000],*p;
scanf("%[^\n]%*c",&s);
int len=strlen(s)-1;
int len2=len;
p=&s;
/*while(len>=0){
    if(s[len]==' '){
        printf("%s ",&s[len+1]);
        s[len]='\0';
    }
    len--;
}*/
while(s[len]!=' '){
    len--;
}
s[len]='\0';
printf("%s ",s);

while(s[len2]!='\0'){
    printf("%c",s[len2]);
    len2--;
}

}
