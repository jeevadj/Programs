#include<stdio.h>
#include <stdlib.h>
int isVowel(char a){
    a = tolower(a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
      return 1;
    return 0;
}
int main()
{
  char s[1000],temp;
    int n, i=0, prev=0,j;
    scanf("%s %d",&s,&n);
    while(s[i]!='\0'){
        if(isVowel(s[i])&&(!(i-prev+1<n))){
            if(i-prev+1<n){
                i++;
                continue;
            }
            else{
            temp = s[i];
            s[i]='\0';
            printf("%s%c ",&s[prev],temp);
            prev=i+1;

            }
        }
        i++;
    }
   }
