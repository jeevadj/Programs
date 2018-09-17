#include<stdio.h>
#include <stdlib.h>
#include<string.h>

struct student{
    char name[100];
    int m[3];
};

int main()
{
    int n,max,maxIndex,sum,index,len,i,c;
    char* temp;
    struct student std[50];
    scanf("%d",&n);

    max=0;
    maxIndex=0;
    for(index=0;index<n;index++){
        sum=0;
        scanf("%s",&std[index].name);
        len=strlen(std[index].name);
        i=len-1;
        c=0;
        while(i>=0){
            if(std[index].name[i]==':'){
                if(c<3){
                        temp=&std[index].name[i+1];
                std[index].m[c]=atoi(temp);
                std[index].name[i]='\0';
                    c++;
                }

            }
            i--;
        }
        sum=std[index].m[0]+std[index].m[1]+std[index].m[2];
        printf("%d",sum);
        if(max<sum){
            max=sum;
            maxIndex=index;
        }

    }
    printf("%s",std[maxIndex].name);


}
