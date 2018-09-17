#include<stdio.h>
#include <stdlib.h>
int swaap(int arr[10],int i,int j){
 int temp;
 temp = arr[i];
 arr[i]= arr[j];
 arr[j] = temp;
 }
int main()
{
  char s[30],temp;
  char count[10]={0};
  char inte[10]={'0','1','2','3','4','5','6','7','8','9'};
  scanf("%s",s);
  int len = strlen(s);
  for(int i=0;i<len;i++)
     count[s[i]-48]++;
  for(int i=1;i<10;i++){
     for(int j=i+1;j<10;j++){
         if(count[i]<count[j]){
             temp = count[i];
             count[i]= count [j];
             count[j] = temp;

             temp = inte[i];
             inte[i] = inte[j];
             inte[j] = temp;
         }else if(count[i]==count[j]&&inte[i]>inte[j]){
             temp = count[i];
             count[i]= count [j];
             count[j] = temp;

             temp = inte[i];
             inte[i] = inte[j];
             inte[j] = temp;
         }
     }
  }
  for(int i=1;i<10;i++)
  {
      for(int j=0;j<count[i];j++){
          printf("%c",inte[i]);
      }
  }

}
