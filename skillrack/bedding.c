#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,arr[100],in=0,len=0,even=0,odd=0;
  while(scanf("%d",&n)>0){
      arr[in]=n;

      in++;
  }
  len=in;
  in=in-3;
  while(in>=0){
      if(arr[in]%2==0){
          even++;
      }else
         odd++;

         in--;
  }


  printf("%d ",((even*arr[len-2])-(odd*arr[len-1])));

}
