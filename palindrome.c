#include<stdio.h>
int main(){
    char s[50]; int len;
    scanf("%s%n",s,&len);
    int i = 0,j = len -1;
    while(i<j){
        if(s[i]!=s[j]){
            printf("%s is not a palindrome",s);
            return 0;
        }
        i++;j--;
    }
    printf("%s is a palindrome",s);
}