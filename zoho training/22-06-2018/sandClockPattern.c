#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100],str1[100];
    int i;
    scanf("%s",&str);
    int len=strlen(str),n=0,cv=0,n1=0;
    if(len%2==0)
    {
        n=len/2;
        cv=1;
    }
    else
    {
        n=len/2+1;
    }
    n1=n-1;
    strcpy(str1,str);
    for(i=0; i<n; i++)
    {
        //printf("\n%*.*s %d %d",(len-i),(len-(i*2)),&str[i],(len-i),(len-(i*2)));
        printf("\n%*.*s",(len-i),(len-(i*2)),&str[i]);
        str[len-i]='\0';
    }
    //printf("%d %d",i,cv);
    for(int j=0; j<n-1; j++)
    {
        if(cv==1)
        {
            str[i+1]=str1[i+1];
            //printf("\n%*.*s %d %d",i+2,i+j+1,&str[(i+2)-(i+j+1)],i+2,i+j+1);
            printf("\n%*.*s",i+2,i+j+1,&str[--n1]);
        }
        else
        {
            str[i]=str1[i];
            //printf("\n%*.*s %d %d",i+1,i+j,&str[(i+1)-(i+j)],i+1,i+j);
            printf("\n%*.*s",i+1,i+j,&str[--n1]);
        }

        i++;
    }
    //  printf("\n %d %d",i-1,len-(i-1));
}
