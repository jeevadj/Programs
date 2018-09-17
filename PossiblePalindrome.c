#include<stdio.h>
int main()
{
    char s[1000],b[50],a=' 'o,flag=0;
    scanf("%[^\n]%*c",s);
    int len = strlen(s),in=0;
    char alphabets[128]= {0};
    for(int i=0; i<len; i++)
        alphabets[s[i]]++;
    alphabets[32]=0;
    for(int i=0; i<128; i++)
    {
        if(alphabets[i]!=0)
        {
            if(alphabets[i]>1)
            {
                int div = alphabets[i]/2;
                alphabets[i]=alphabets[i]%2;
                //printf("\n %d",div);
                while(div>0)
                {
                    b[in]=(char)i;
                    in++;
                    div--;
                }
            }
            else if(flag==0&&alphabets[i]==1)
            {
                a=(char)i;
                flag=1;
            }

            // printf("\n %c--%d",i,alphabets[i]);
        }
    }
    for(int k=in-1; k>=0; k--)
    {
        printf("%c",b[k]);
    }
    if(a!=' ')
    printf("%c",a);
    for(int k=0; k<in; k++)
    {
        printf("%c",b[k]);
    }
    printf("\n%d ",(2*in)+1);
}
