#include<stdio.h>
#include<string.h>
static struct name{
char n[100];
};
char *Camel(char arr[100],int i){
   int j=0;

   if(i&1){
         while(arr[j]!='\0'){
          if(j&1){
            arr[j]= toupper(arr[j]);
          }else{
              arr[j]=tolower(arr[j]);
          }
          j++;
       }

   }else{
       while(arr[j]!='\0'){
          if(j&1){
            arr[j]= tolower(arr[j]);
          }else{
              arr[j]=toupper(arr[j]);
          }
          j++;
       }
     }
     return arr;
}
char *ReverseCamel(char arr[100],int i){
   int j=0;

   if(i&1){
         while(arr[j]!='\0'){
          if(j&1){
            arr[j]= tolower(arr[j]);
          }else{
              arr[j]=toupper(arr[j]);
          }
          j++;
       }

   }else{
       while(arr[j]!='\0'){
          if(j&1){
            arr[j]= toupper(arr[j]);
          }else{
              arr[j]=tolower(arr[j]);
          }
          j++;
       }
     }
     return arr;
}

int main(){
    int no,i;
    scanf("%d",&no);
    struct name names[10];
    for(i=0;i<no;i++)
      scanf("%s",&names[i].n);
    for(i=0;i<no;i++)
        printf("\n %s",Camel(names[i].n,i));
    for(i=no-1;i>=0;i--)
        printf("\n %s",ReverseCamel(names[i].n,i));
}
