#include<stdio.h>
#include<stdlib.h>
int main(){
enum days{Mon=78, Tues, Weds=80, Thrus, Fri, Sat,Sun};
typedef int bow;
bow j=6;

enum days day;

int a = 7;

for(int i=Mon;i<=Sun;i++){
    printf("%d ",i);
}
printf("\n%o",a*7);
printf("\n%x",a*7);
printf("\n%d",j);
printf("\n%0.8d",a*a*a*a*a*a);
printf("\n%010.5d",a);
}
