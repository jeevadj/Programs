#include<stdio.h>
int print(int n){
  if(n>0){
    print(n-1);
    printf("%d\n",n);
   // print(n-1);
  }
  return 1;
}
int main(){
 print(10);}
