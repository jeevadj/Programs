/*
input set :
i/p:
4
o/p:
1 2 3 4
9 10 11 12
13 14 15 16
5 6 7 8

i/p :
7
o/p:
1 2 3 4 5 6 7
15 16 17 18 19 20 21
29 30 31 32 33 34 35
43 44 45 46 47 48 49
36 37 38 39 40 41 42
22 23 24 25 26 27 28
8 9 10 11 12 13 14


*/#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,j;
  scanf("%d",&n);
  int i=0;
  while(i<n){
      for(j=0;j<n;j++)
          printf("%d ",(i*n)+j+1);
      printf("\n");
      i+=2;
  }
  i = (n&1)?i-3:i-1;
  while(i>0){
      for(j=0;j<n;j++)
          printf("%d ",(i*n)+j+1);
      printf("\n");
      i-=2;
  }

}
