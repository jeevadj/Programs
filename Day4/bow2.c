#include<stdio.h>
#include<stdlib.h>

int main()
{
    void *v;
    int integer=2;
    int *i=&integer;
    v=i;
    printf("%d",i);
}



