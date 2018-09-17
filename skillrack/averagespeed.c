#include<stdio.h>
#include <stdlib.h>

int main()
{
   char s[100],*p;
   int dist,ph,thour=0,tdist=0;
   scanf("%[^\n]",&s);
   int len=strlen(s);
   printf("\n len = %d",len);
   for(int i=len-1;i>=0;i--){
       printf("\n %s",&s[i]);
       if(s[i]=='@'){
            printf("\n %s",&s[i+1]);
           p=&s[i+1];
           ph=atoi(p);

           thour+=ph;
           printf("\n bow1");
           s[i]='\0';

       }
       if(s[i]==' '){
           printf("\n bow");
           p=&s[i+1];
           dist=atoi(p);
           tdist +=dist;
           s[i]='\0';
       }
   }
   p=s;
   dist =atoi(p);
   tdist +=dist;
   printf("\n %d %d %0.2f",tdist,thour,(float)tdist/thour);

}
