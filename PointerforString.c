#include<stdlib.h>
#include<stdio.h>

int combination(char str[],int len,int start, int end){
    
    for(start;start<=end;start++){
        printf("%c",str[start]);
    }
    
}

int main(){
    char *p;
    int len;
    p = malloc(sizeof(char));
    scanf("%[^\n]%n",p,&len);
    for(int i=0;i<len;i++){
       for(int j=0;j<len;j++){
           if(i<=j){
           printf("\n",i,j);
           combination(p,len,i,j);
           }
       }
    }
   
    return 0;
    
}