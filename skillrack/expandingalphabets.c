#include<stdio.h>
int main(){
char str[100],alphabet[50][50],*temp;
int arr[50],in=0,i;
int len,index;
scanf("%s",&str);
len=strlen(str);
    for(index=len;index>=0;index--){
        if((str[index]>='a'&&str[index]<='z')||(str[index]>='A'&&str[index]<='Z')){

            temp=&str[index+1];
            arr[in]=atoi(temp);

            str[index]='\0';

            alphabet[in][0]=str[index];
            in++;
        }
    }
    for(index=in-1;index>=0;index--){

        for(i=0;i<arr[index];i++){
            printf("%c",alphabet[index][0]);
        }
    }

}
