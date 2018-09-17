#include<stdio.h>
#include <stdlib.h>
int isVowel(char a){
    a = (a>='a'&&a<='z')?a:a+32;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
      return 1;
    return 0;
}
int main()
{
  char s[1000],temp;
    int n, i=-1, prev=0,j;
    scanf("%[^\n]%*c %d",&s,&n);
    while(s[++i]!='\0')
        if(isVowel(s[i])&&(!(i-prev+1<n))){
             temp = s[i];
            s[i]='\0';
            printf("%s%c ",&s[prev],temp);
            prev=i+1;
        }
}
