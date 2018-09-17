#include<stdio.h>
float roundOf(float value){
   float val = (int)value*100;
   return (float)val/100.0;
   }
int main(){
float a;
scanf("%f",&a);
printf("%f",roundOf(a));
a = roundOf(a)/1.24567;
printf("\n%f %f",a,roundOf(a));
}
