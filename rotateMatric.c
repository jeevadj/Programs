#include<stdio.h>
int main(){

int arr[10][10];
    int i=0,j=0,temp;
    char a;
    while(scanf("%d%c",&temp,&a)>0)
    {
        //printf("\n%c--%d",a,a);
        arr[i][j] = temp;
        j++;
        if(a=='\n')
        {
            j=0;
            i++;
        }
        else if(a!=32)
        {
            break;
        }

    }
    i++;
    for(int k=j-1;k>=0;k--){
        for(int l=0;l<i;l++)
            printf("%d ",arr[l][k]);
        printf("\n");
    }

}
