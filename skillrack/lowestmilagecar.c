#include<stdio.h>
#include <stdlib.h>

int main()
{
   char carname[50],car[50];
   float milage,min=999.99;
   while(scanf("%[^@]@%f ",&carname,&milage)>0){
       printf("\n %s",carname);
       if(min>milage){
           min=milage;

           strcpy(car,carname);
           printf(" %s",car);
       }
   }

printf("%s",car);
}
