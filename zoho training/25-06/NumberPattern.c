#include<stdio.h>
#include<stdlib.h>
int noSys(int i){
    int flag=0;
    while(i!=0){
        if(i%10==3 || i%10==4) flag=1;
        else return 0;
        i=i/10;
    }
    return flag;
}

int main(){
int n,cnt=0;
scanf("%d",&n);
for(int i=0;i<100;i++){
    if(noSys(i)){
     ++cnt;
      if(n==cnt){
        printf("%d %d",i,cnt);
      }

    }
  }
}
