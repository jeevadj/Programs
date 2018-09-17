#include<stdio.h>
#include<string.h>

int main(){
char str[100];
int len ,index,stindex,lstindex;
scanf("%[^\n]",&str);

len = strlen(str)-1;
stindex = 0;
lstindex = len;

for(index=0;index<len;index++){
   if(str[index]==' '){
       if(lstindex==len){
           lstindex = --index;
       }
       else{
           stindex=lstindex;
           lstindex = --index;
        }
        //printf("%s",&stindex[str],&lstindex[str]);
        }

}
printf("%s",&stindex[str],&lstindex[str]);

}
