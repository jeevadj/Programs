#include<stdio.h>
#include<stdlib.h>

void infect(char crop[50][50],int row, int col,int R,int C){
    printf("\n %d %d %c",row,col,crop[row][col]);
     if(crop[row][col]=='I'|| crop[row][col]=='D'){
        crop[row][col]='D';
        printf("\n %d %d %c",row,col,crop[row][col]);

     }
     if(row==0&&(crop[row+1][col]=='W'|| crop[row+1][col]=='D')){
        infect(crop,row+1,col,R,C);
     }
     if(col==0&&(crop[row][col+1]=='W'|| crop[row][col+1]=='D')){
        infect(crop,row,col+1,R,C);
     }
     if(row==R-1&&(crop[row-1][col]=='W'|| crop[row-1][col]=='D')){
        infect(crop,row-1,col,R,C);
     }
     if(col==C-1&&(crop[row][col-1]=='W'|| crop[row][col-1]=='D')){
        infect(crop,row,col-1,R,C);
     }

}

int main(){
int R,C,row,col;
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
        printf("\n %d %d %c",row,col,crop[row][col]);
        infect(crop,row,col,R,C);
     }
   }
}
for(row=0;row<R;row++){
for(col=0;col<C;col++){
   printf("%c",crop[row][col]);

   }
}


   }
