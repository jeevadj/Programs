/*
i/p : aaabbbcccdddeeefffg
o/p : abcdefg
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
char temp = ' ',n;
while(scanf("%c",&n)){
  if(n=='\n') break;
  if(temp!=n){ printf("%c",n);
  temp = n;
  }
 }
}
