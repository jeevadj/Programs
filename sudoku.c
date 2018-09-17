#include<stdio.h>
int check(int a[9][9],int i,char c){
    int sum =0;
    if(c=='r'){
        for(int k=0;k<9;k++){
            sum+=a[i][k];
        }
    }else if(c=='c'){
       for(int k=0;k<9;k++){
            sum+=a[k][i];
        }
    }
    return sum;
}
int checkMatrix(int a[9][9],int i,int j){
    int sum =0;
for(int b=i;b<i+3;b++)
    for(int c=j;c<j+3;c++)
        sum+=a[b][c];

 return sum;
}
int main(){
int a[9][9],i,j,flag=0;
for(i=0;i<9;i++)
 for(j=0;j<9;j++)
   scanf("%d",&a[i][j]);

for(i=0;i<9&&flag==0;i++)
    if(check(a,i,'r')!=45)
         flag=1;
for(i=0;i<9&&flag==0;i++)
    if(check(a,i,'c')!=45)
         flag=1;

for(i=0;i<9&&flag==0;i++){
    for(j=0;j<9&&flag==0;j++){
        if(i%3==0&&j%3==0)
            if(checkMatrix(a,i,j)!=45)
                flag=1;
    }
}
if(flag==0){
    printf("yes");
}else{
printf("no");
}
}
