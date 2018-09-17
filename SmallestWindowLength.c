/*
input :
2
aabcbcdbca
aaab

output :
4
2

 */#include<stdio.h>
#include<stdlib.h>
int GetMinLength(char s[1000],int len,int DistCount){
    int minLength = len;
    int i,slen,count;
    for(i=0;i<len;i++){
        int j=i;
        char alpha[26]={0};
        count = 0;
        slen = 0;
        while(j<len&&count!=DistCount){
            //printf("\ns[%d]-%c-c-%d",j,s[j],alpha[s[j]-'a']);
            if(alpha[s[j]-'a']==0){ count++; alpha[s[j]-'a']++;}
            slen++;
            j++;
        }
      //  printf("\n Count : %d \n",count);
        minLength = (count==DistCount&&minLength>slen)?slen:minLength;
    }
    return minLength;
}
int main(){
int n;
scanf("%d",&n);
getchar();
for(int i=0;i<n;i++){
   char s[1000];
   char temp;
   char alphabet[26]={0};
   int ctr =0,count=0;
   scanf("%[^\n]%*c",&s);
   while(s[ctr]!='\0'){
     if(alphabet[s[ctr++]-'a']==0) {count++;alphabet[s[ctr-1]-'a']++;}
    }
   // printf("\n%s %d %d ",s,ctr,count);
    printf("%d",GetMinLength(s,ctr,count));
}
}
