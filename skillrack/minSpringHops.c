#include<stdio.h>
#include <stdlib.h>
int n,flag=0;
int minHops(int a[n],int index,int cont){
    printf("\n %d %d %d %d",a[index],index,cont,flag);
    if(index<n-1&&index+a[index]<=n){
        cont++;
        printf("bowwww");
        minHops(a,index+a[index],cont);
    }
    else if(index==n-1){
            printf("bow");
        cont++;
        return cont;
    }else{
    return 99;}
}

int main()
{
  int m,count=0,min=9999;
  scanf("%d %d",&n,&m);
  int a[n],index[n],in=0;
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(a[i]==m){
          index[in]=i;
          in++;
      }
  }
  for(int i=0;i<in;i++){
      count=minHops(a,index[i],0);
      printf("\n %d %d",count,min);
      if(min>count){
          min=count;
      }

  }
 printf("\n %d",min);
}
