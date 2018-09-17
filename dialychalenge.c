#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000],alpha[100],flag=0;
    int n,cnt=0;
    int index[100]= {0};
    scanf("%[^\n]%*c",&s);
    scanf("%d",&n);
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        alpha[s[i]-'a']=s[i];
        index[s[i]-'a']++;
        printf("\n%c--%d--%c",s[i],index[s[i]-'a'],alpha[s[i]-'a']);
    }
    /* for(int i=0;i<len;i++){
       printf("\n%d--%c",index[s[i]],alpha[s[i]]);
     }*/
    for(int i=0; i<len; i++)
    {

        if(index[s[i]-'a']>=2)
        {
            cnt++;
            index[s[i]-'a']=0;
            if(cnt==n)
            {
                printf("%c",alpha[s[i]-'a']);
                flag=1;
                break;

            }
        }
    }
    if(flag==0)
    {
        printf("-1");
    }

}
