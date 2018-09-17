#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* ip;

    ip = malloc(sizeof(int));
    printf("Enter a no \n");
    for(int i=0;i<5;i++)
    scanf("%d", (ip+i));
    for(int i=0;i<5;i++)
    printf("*ip=%d", *(ip+i));
    return 0;
}
