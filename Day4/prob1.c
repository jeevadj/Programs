/*
<--- input set --->
1 3 5 9 11 13 17 18 19
2 4 5 10 13 15 17 22 34
*/
#include<stdio.h>
int SumUpValues(int a[100],int b[100],int l1,int l2,int i, int j,int sum)
{
    int tempSumA = 0,tempSumB = 0,tempi, tempj,flag =0;
    if(i<l1||j<l2)
    {
        for(tempi = i; tempi<l1&&flag == 0; tempi++)
            for(tempj = j; tempj<l2&&flag==0; tempj++)
                if(a[tempi]==b[tempj])
                {
                    flag = 1;
                    break;
                }
        while(i<tempi-1)
            tempSumA +=a[i++];
        while(j<tempj)
            tempSumB +=b[j++];
        sum += (tempSumA>tempSumB)?tempSumA:tempSumB;
        sum +=a[tempi-1];
        sum = SumUpValues(a,b,l1,l2,tempi,++tempj,sum);
    }
    return sum;
}
int main()
{
    int a1[100],a2[100],i=0,len1,len2;
    char c;
    while(scanf("%d%c",&a1[i++],&c))
        if(c=='\n')
            break;
    len1=i;
    i=0;
    while(scanf("%d%c",&a2[i++],&c))
        if(c=='\n')
            break;
    len2=i;
    printf("%d",SumUpValues(a1,a2,len1,len2,0,0,0));
}
