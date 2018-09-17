#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100];
scanf("%[^\n]",&s);
int len=strlen(s);
int alphabet[75]={0};int minindex=999,flag=0;

for(int i=0;i<len;i++){

    alphabet[s[i]]++;
  //  if(index[s[i]][0]==0){
   //     index[s[i]][0]=i;
        printf("\n %c %d ",s[i],s[i]);
   // }
}
for(int i=0;i<len;i++){

    printf("\n%c--%d--%d ",s[i],s[i],alphabet[s[i]]);

    if(alphabet[s[i]]==2&&flag==0){
            minindex=i;
            flag=1;
       // if(minindex>index[s[i]][0]){
        //    minindex=index[s[i]][0];
       // }
    }
}
printf("%c",s[minindex]);
}
