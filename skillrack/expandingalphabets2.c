#include<stdio.h>
#include<string.h>

int main()
{
   char a[300];
   int n;

   while(scanf("%[^0-9\n]%d",&a,&n)>0)
   {
       int x;
       for(x=1;x<=n;x++)
       {
           printf("%s",a);
       }
   }


}

