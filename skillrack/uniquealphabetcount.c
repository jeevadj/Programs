#include<stdio.h>
#include <stdlib.h>
int n;
void sort(char sum[n],char str[n][100]){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(sum[i]>sum[j]){
                int temp = sum[i];
                sum[i]=sum[j];
                sum[j]=temp;

                char temp1[100];
                strcpy(temp1,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp1);
            }
        }
    }
}
void lexicographicalCompare(char s1[100],char s2[100],int l1,int l2){
    int len;
    if(l1<l2){
        len = l1;
    }else{
        len = l2;
    }
    for(int i=0;i<l1;i++){
        if(s1[i]<s2[i]){
            printf("%s\n%s",s1,s2);
        }else if(s1[i]>s2[i]){
            printf("%s\n%s",s2,s1);
        }else if(s1[i]==s2[i]){
            continue;
        }
    }
}
int main()
{


    scanf("%d",&n);
    char str[n][100];
    char alphabet[n][26];
    char sumOfAlpha[n];
    char l[n];
    for(int i=1;i <=n ; i++){
        for(int j=0; j <26; j++)
            alphabet[i][j]=0;
    }
    for(int i =1; i <=n ; i++){
        scanf("%s",&str[i]);
        int len=strlen(str[i]);
        l[i]=len;
        --len;
        while(len>=0){
            //printf(" %c--%d",str[i][len],str[i][len]);
            alphabet[i][str[i][len]-'a']++;
            len--;
        }

    }

    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<l[i];j++){
            if(alphabet[i][str[i][j]-'a']==1){
                sum+=1;
            }
        }
        sumOfAlpha[i]=sum;
    }
    sort(sumOfAlpha,str);
   for(int i=1;i<=n;i++){
       if(sumOfAlpha[i]==sumOfAlpha[i+1]){
           lexicographicalCompare(str[i],str[i+1],l[i],l[i+1]);
           continue;
       }
       printf("\n%s",str[i]);
   }


}
