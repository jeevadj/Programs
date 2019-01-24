#include<stdio.h>
int main(){
struct{int x;} var = {5},*p = &var;
printf("%d %d %d",var.x,p->x,(*p).x);
}