#include<stdio.h>
#include<stdlib.h>
int main(){
int i=0,j=0;
for(i=4;i>=0;i--){
  for(j=0;j<=i;j++){
      if(j==0)
         printf("\n%*.1c",5-i,(char)65+j);
      else
         printf("%1c",(char)65+j);
      }
      }
      }
