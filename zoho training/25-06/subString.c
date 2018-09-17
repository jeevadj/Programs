#include<stdio.h>
#include<stdlib.h>
int subString(char s[],char s1[],int i,int len){
   int j=0,count=0;
   while(s[i]==s1[j]&&j<len){
    // if(s[i]==s1[j]){
        count++;
    // }
     j++;
     i++;
   }
   if(count==len){
    return 1;
    }else{
    return 0;}
}
int main(){
char s[100],s1[100],flag=0;
scanf("%[^\n]%*c",&s);
scanf("%[^\n]%*c",&s1);
int len = strlen(s);
int i=0,j=0;
while(i<=len){
   if(s[i]==s1[j]){
      if(subString(s,s1,i,strlen(s1)-1)){
         flag=1;
         printf("%d",i);
         break;
      }
   }i++;
   }
   if(flag==0){
    printf("-1");
   }
}
