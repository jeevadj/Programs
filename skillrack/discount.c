#include<stdio.h>
#include <stdlib.h>
int n;
float discountedPrice(int price,int discountlist[n],int discountPrice[n]){
     float discountamt =0,amt=0;
     char flag=0;
     //printf("%f",fprice);
     for(int i=0;i<=n-1;i++){
            printf("%d %d %d",i,discountlist[i],discountlist[i+1]);
         if(i+1<n&&(price>=discountlist[i]&&price<discountlist[i+1])&&discountlist[i+1]!=0){
             flag=1;
            // printf("%f",price*(discountPrice[i]/100.0));

             discountamt = price * (float)discountPrice[i]/100.0;
           //  printf("%f",discountamt);
             amt = (float) price - discountamt;
             //printf("%f",amt);
             break;
         }
     }
     if(flag==0)
       return (float)price;
     else
       return amt;
}
int main()
{
    int price;
    scanf("%d %d",&n,&price);
    int discountlist[n+1],discountPrice[n];
    for(int i=0;i<n;i++)
       scanf("%d",&discountlist[i]);
    discountlist[n]=0;
    for(int i=0;i<n;i++)
        scanf("%d",&discountPrice[i]);

    printf("%.2f",discountedPrice(price,discountlist,discountPrice));


}
