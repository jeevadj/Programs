#include<stdio.h>
#include<string.h>

 int ispalindrome(char str1[], int sindex, int lindex){
while(sindex<lindex){
    if(str1[sindex]==str1[lindex]){
           return 0;
    }sindex++;
    lindex--;

}
return 1;

}
int main(){
char str[1000];
    int len,index,stindex,lstindex;
    scanf("%[^\n]s",str);
    len = strlen(str);
    stindex=0;
    lstindex=1;

    while(lstindex<=len){
        if(str[lstindex]==' ' || str[lstindex]=='\0'){
            str[lstindex]='\0';
            if(ispalindrome(str,stindex,lstindex-1)){
                printf("%s ",&str[stindex]);
            }
            stindex=lstindex+1;
        }
        lstindex++;
    }
}
