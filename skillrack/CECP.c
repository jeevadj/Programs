#include<stdio.h>
#include <stdlib.h>

struct student{
    char name[100];
    int m,p,c;
};

int main()
{
    int n,max,maxIndex,sum,index;
     struct student std[50];
    scanf("%d",n);

    max=0;
    maxIndex=0;
    for(index=0;index<n;index++){
        sum=0;
        scanf("%s:%d:%d:%d",std[index].name,std[index].m,std[index].p,std[index].c);
        printf("%s",std[index].name);
        sum=std[index].m+std[index].p+std[index].c;
        if(max<sum){
            max=sum;
            maxIndex=index;
        }

    }
    printf("%s",std[maxIndex].name);


}
