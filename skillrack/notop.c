#include<stdio.h>
int main(){
int a,z;
scanf("%d",&a);
printf("%d %d",a,!a);
if(a){
    printf("bow");
}
if(!a){
    printf("boww2");
}else{
printf("boww3");}
printf("\n a++ = %d ",a++);
printf("\n %d",a);
printf("\n a++ = %d , ++a = %d ",a++,++a);
printf("\n %d",a);
printf("\n ++a = %d , a++ = %d ",++a,a++);
printf("\n %d",a);
printf("\n ++a = %d , a++ = %d , a++ = %d , ++a = %d ",++a,a++,a++,++a);
printf("\n %d",a);
z= a++ + ++a * a++ / ++a;
printf("\n%d",z);
}
