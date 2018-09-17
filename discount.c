#include<stdio.h>
int n;
float discountedPrice(int price, int discountlist[n],int discountPrice[n]){
    float discountamt=0;
    float amt=0.0;
    for(int i=0;i<n-1;i++){
        if((price>discountlist[i]&&price<discountlist[i+1])){

            printf("\n %0.2f",(float)discountPrice[i]/100);
            discountamt = price * ((float)discountPrice[i]/100);
            amt =(float) price - discountamt;
            printf("\n %d %d %d %f %f",price,discountlist[i],discountlist[i+1],discountamt,amt);
        }
    }
    return amt;
}
int main(){
    int  price;
    scanf("%d %d",&n,&price);
    int discountlist[n],discountprice[n];
    for(int i=0;i<n;i++){
        scanf("%d",&discountlist[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&discountprice[i]);
    }
    printf("\n %.2f",discountedPrice(price,discountlist,discountprice));
}
