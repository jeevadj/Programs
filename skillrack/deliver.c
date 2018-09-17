#include<stdio.h>
#include <stdlib.h>
int n;
int equalString(char *temp, char *temp2)
{
    int len = strlen(temp);
    int len2 = strlen(temp2)-1;
    int i=0,j=0,count=0;
    printf("\n hey %s %s %d %d ",temp,temp2,len,len2);
    while(i<len&&j<len2)
    {    printf("%c+%c",temp[i],temp2[i]);
        if(temp[i]==temp2[j])
        {

            count++;

        }
        else
        {    return 0;
             ++count;
        }
        ++i;
        ++j;
    }
    if(i==len&&j==len2)
    {
        return 1;
    }

}
void deliver(int i,char s[n][50],char s1[n][50],int c,char *temp)
{


        for(int j=i+1; j<n; j++)
        {     char *temp2=s[j];
             printf("%s-%s-%d",temp,s[j],equalString(temp,temp2));
          /*  if(equalString(temp,s[j]))
            {
                //flag++;

                //deliver(j,s,s1,++c,s[j]);
            }*/
        }
        /*if(flag==0)
        {
            printf("\n bow+%s",temp);
        }*/
    }


int main()
{

    scanf("%d",&n);
    char s[n][50],s1[n][50];
    for(int i=0; i<n; i++)
    {
        scanf("%[^ ]%s",&s[i],&s1[i]);
    }
    deliver(0,s,s1,1,s1[0]);
  /*  for(int i=0; i<n; i++)
    {
        printf("%s %s",s[i],s1[i]);
    }*/

}
