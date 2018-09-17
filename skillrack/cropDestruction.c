#include<stdio.h>
#include<stdlib.h>
int R,C;
void infect(char crop[R][C],int row, int col){


     if(row<0 || col <0 || row >=R || col >= C) return;

        crop[row][col]='D';

        if(crop[row+1][col]=='W'){
        infect(crop,row+1,col);
     }
     if(crop[row][col+1]=='W'){
        infect(crop,row,col+1);
     }
     if(crop[row-1][col]=='W'){
        infect(crop,row-1,col);
     }
     if(crop[row][col-1]=='W'){
        infect(crop,row,col-1);
     }



}

int main(){
int row,col;
char temp[2];
scanf("%d %d",&R,&C);
char crop[R][C];
for(row=0;row<R;row++){
for(col=0;col<C;col++){
   scanf("%s",&temp);
       crop[row][col]=temp[0];
   }
}
for(row=0;row<R;row++){
for(col=0;col<C;col++){
     if(crop[row][col]=='I'){
       // printf("\n %d %d %c",row,col,crop[row][col]);
        infect(crop,row,col);
     }
   }
}
for(row=0;row<R;row++){
for(col=0;col<C;col++){
   printf(" %c",crop[row][col]);

   }printf("\n");
}


   }
