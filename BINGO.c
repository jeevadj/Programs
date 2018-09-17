#include<stdio.h>
int array[5][5];
int strikeGuess(int guessed){
int row,column;
for(row=0;row<5;row++){
 for(column=0;column<5;column++){
     if(array[row][column]==guessed){

        array[row][column]=0;

     }printf("%d ",array[row][column]);
}printf("\n");
}}
int checkBingo(){
    int bingo,row,column,sum;
    bingo=0;
    for(row=0;row<5;row++){
            sum=0;
        for(column=0;column<5;column++){
            sum+=array[row][column];

        }
      if(sum==0){
            bingo+=1;
            if(bingo==5){
                return bingo;
            }
        }
      }
      for(column=0;column<5;column++){
            sum=0;
        for(row=0;row<5;row++){
            sum+=array[column][row];

        }
      if(sum==0){
            bingo+=1;
            if(bingo==5){
                return bingo;
            }
        }
      }
      if(bingo==5){
        return bingo;
      }
      return 0;
    }
int main(){
 int row,column,guess,input[50],inpindex,guessAns=0,cv,cnt,c;
 cnt=1;
 c=0;

 for(row=0;row<5;row++){
 for(column=0;column<5;column++){
     //scanf("%d",&array[row][column]);
     array[row][column]=cnt;
     cnt++;
     }
   }
  scanf("%d",&guess);
  for(inpindex=0;inpindex<guess;inpindex++)
  {
  scanf("%d",&input[inpindex]);

  strikeGuess(input[inpindex]);
  cv=checkBingo();
  if(cv !=0 &&c==0){
        printf("\n\n %d %d",cv,inpindex);
    guessAns = inpindex+1;
    c=1;
    return 0;
  }
  }
  printf("%d",guessAns);
 }
