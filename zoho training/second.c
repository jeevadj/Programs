#include<stdio.h>
struct xx{
int x=3;
char name="hello";
};
int main(){

struct xx *s = malloc(sizeof(struct xx));
printf("%d",s->x);
printf("%s",s->name);
}
