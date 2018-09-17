#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i=0,j=0,mid=0;
    for(i=1; i<=5; i++)
    {
        mid=(i*2)/2;
        for(j=1; j<=mid; j++)
        {
            if(j==1)
                printf("\n%*.1c",5-i+1,(char)65+j-1);
            else
                printf("%1c",(char)65+j-1);
        }
        for(j=mid-1; j>=1; j--)
        {
            printf("%1c",(char)65+j-1);
        }
    }
    for(i=5;i>=1;i--){
            mid=(i*2)/2;
  for(j=1;j<=mid;j++){
      if(j==1)
         printf("\n%*.1c",5-i+1,(char)65+j-1);
      else
         printf("%1c",(char)65+j-1);
      }
    for(j=mid-1;j>=1;j--){
        printf("%1c",(char)65+j-1);
    }
      }
}
