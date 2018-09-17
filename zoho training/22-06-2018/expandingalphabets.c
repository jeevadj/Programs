#include<stdio.h>
#include<stdlib.h>
int main(){
char s[100],*p;
char alphabet[26][1];int count[26][1];
scanf("%s",&s);
int len = strlen(s)-1,i=0;
while(len>=0){
        //printf("\n%c",s[len]);
    if(isalpha(s[len])){
        alphabet[i][0]=s[len];
        s[len]='\0';
        if(s[len+1]>='0'&&s[len+1]<='9'){
            p=&s[len+1];
            count[i][0]=atoi(p);
           // printf("\nbow %c %c %d",s[len+1],alphabet[i][0],count[i][0]);
            i++;

        }else{
           count[i][0]=1;
          // printf("\nbow %c %c %d",s[len+1],alphabet[i][0],count[i][0]);
           i++;
           }
    }
    len--;
}
for(int j=i-1;j>=0;j--){
        //printf("\nbow %c %d",alphabet[j][0],count[j][0]);
    for(int c=0;c<count[j][0];c++){
        printf("%c",alphabet[j][0]);

}
}}
