#include<stdio.h>
#include <stdlib.h>

int main()
{ char a[100],alphabet[50],c,*p;
  int arr[50],in=0;

  while(scanf("%[^a-zA-Z\n]%c",&a,&c)>0){

          p = &a;
      arr[in] = atoi(p);
      alphabet[in] = c;
      printf("\n %d %d %c",in,arr[in],alphabet[in]);
      in++;

  }
  int len=in;
  in=0;
  while(in<len){
      for(int i=0;i<arr[in];i++ ){
          printf("%c",alphabet[in]);
      }
      in++;
  }


}
