#include <stdio.h>

int main()
{
    int *p,*temp,input,count;
    char a;
    p = malloc(sizeof(int *));
    temp = p;
    count =0;
    while(scanf("%d%c",&input,&a)){
        *temp = input;
        temp++;
        if(a =='\n') break;
    }
    printf("\n Diff = %d ",(temp - p)); // to find the total number of input got from user
    for(int itr=0; itr < count ; itr++){
        printf("\n %d -- %d",itr,*(p+itr)); 
    }
    return 0;
}
