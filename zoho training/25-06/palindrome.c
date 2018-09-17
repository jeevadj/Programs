#include<stdio.h>
#include<stdlib.h>
int ispalindrome(int a,int b,char s[]){
       while(a<b){
        if(s[a]!=s[b]){
            return 0;
        }
        a++;
        b--;
        }

        return 1;
}
int main(){
int s[100];
scanf("%s",&s);
int i=0,j=0;
int lenP=0,start=0,end=0;
int len=strlen(s);
for(i=0;i<len;i++){
    for(j=len-1-i;j>i;j--){
        if(s[i]==s[j]){
            if(printf("%d",ispalindrome(s,i,j))){
                if(lenP>(j-i)){
                lenP=j-i;
                start=i;
                end=j;
                }
            }
        }
    }
}
}
