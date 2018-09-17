#include<stdio.h>
int main(){
int n ,j=0;
scanf("%d",&n);
for(int i=n-1;i>=0;i--){
   for(j=0;j<i;j++){
    printf("*");
   }
   for(j;j<n;j++){
    printf("%d",n-j);
   }
   printf("\n");
}
}
