#include<stdio.h>
#include<stdlib.h>
int Digit[10] = {0};
void FindDigit(int num)
{
    while(num>0)
    {
        Digit[num%10]++;
        num = num/10;
    }
}
void print(int value,int itr){
while(itr--)
    printf("%d",value);
return ;
}
int main()
{
    int x,y,flag=0,tempValue;
    scanf("%d %d",&x,&y);
    FindDigit(x);
    FindDigit(y);
    int temp=8;
    while(temp>=0){
        if(Digit[temp]!=0){
            tempValue=temp;
            Digit[temp]--;
            break;
        }
        temp -=2;

    }
    for(int i=1; i<10; i++)
    {
        if(Digit[0]>0) flag=1;
        while(Digit[i])
        {
            printf("%d",i);
            Digit[i]--;
            if(flag=1)
            {     print(0,Digit[0]);
                  Digit[0]=0;
                  flag = 0;
            }
            print(i,Digit[i]);
            Digit[i]=0;
        }
    }
    printf("%d",tempValue);
}
