#include<stdio.h>
#include <stdlib.h>
int N;

int main()
{
  char a[100],count=0,temp=0;
  int c,cnt=0;
  scanf("%[^\n]%*c",&a);
  scanf("%d",&c);
  N=strlen(a);
  int in = c-1;
  printf("%d",N);
//  while(1){
//      if(in<N){
//          printf("\n %c %d",a[in],in);
//          in+=c;
//      }
//      else if(in>N){
//          in = in - N -1;
//      }
//      if(in == N){
//          printf("\n %c %d",a[in],in);
//          break;
//      }
//  }

  for(int index = c-1;index<=N;index+=c){
     printf("%c",a[index]);}

}
