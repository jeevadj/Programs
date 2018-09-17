#include<stdio.h>
int palindrome(char s[100],int i,int j)
{
    int len=j-i;
    if(len<3) return 0;
   //printf("\n len-%d i-%d j-%d",len,i,j);
   while(j>=i){
        //printf("\n%c %c",s[i++],s[j--]);
        if(s[i++]!=s[j--])
               return 0;}

   return 1;
}
int main()
{
    char s[100];
    scanf("%s",&s);
    int len=strlen(s);
    int max=0,start,end;
    for(int i=0; i<len-1; i++)
    {
        for(int j=len-1; j>0; j--)
        {
            if(palindrome(s,i,j))
            {
               if(max<(j-i)){
                max = j-i;
                start = i;
                end = j;
               }
            }
        }
    }
    printf("\n %d - ",max);
    while(start<=end){
        printf("%c",s[start++]);
    }

}
