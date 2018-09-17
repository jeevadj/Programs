#include<stdio.h>
#include <stdlib.h>

struct batsman{
    char name[50];
    int runs;
};
int main()
{
  int n,i=0,max=0,index=0,in;
  char *p;
  scanf("%d",&n);
  struct batsman bat[n];
  while(i<n){
      scanf("%s",&bat[i].name);
      in=strlen(bat[i].name)-1;
      while(in>0){
          if(bat[i].name[in]==','){
              p=&bat[i].name[in+1];
              printf("%s",p);
              bat[i].runs=atoi(p);
              bat[i].name[in]='\0';
          }
          in--;
      }
      i++;
  }
  max=bat[0].runs;
  for(i=1;i<n;i++){
      if(max<bat[i].runs){
          max=bat[i].runs;
          index=i;
      }
  }
  printf(" %d %s",index,bat[index].name);

}
