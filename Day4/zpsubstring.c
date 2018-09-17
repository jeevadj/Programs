#include<stdio.h>
int flag=0,len2=0,len1=0,flag2=0;
int check(char first[],char second[],int itr, int itr2){

        //   printf("\n %d %d %c %c %c",itr,itr2,first[itr],second[itr2],second[itr2+1]);

         if(second[itr2]=='\\'&&second[itr2+1]=='*'){
            itr2++;
            flag2++;

         }
         if(second[itr2]=='*'&&itr2==len2-1){
                printf("\n yes");
            flag=1;
            return;
         }
         if(second[itr2]=='*'&&itr<=len1&&second[itr2+1]!=first[itr]){

               check(first,second,itr+1,itr2);
         }else if(second[itr2+1]==first[itr]&&itr2!=len2){
             check(first,second,itr+1,itr2+2);

         }
        if(itr2==len2&&itr==len1&&!flag){
            printf("\n yes");
            flag=1;
            return;
        }else if(flag&&itr==len1&&itr2-flag2==len2){
            printf("\n yes");
            flag=1;
            return;
           }
        if(first[itr]==second[itr2]&&itr<=len1){
            itr++;
            itr2++;
            check(first,second,itr,itr2);
        }
        return ;

    }

int main(){
char first[100],second[100];
scanf("%s %s",&first,&second);
len1=strlen(first);
len2=strlen(second);
int itr2=0;
for(int itr = 0;itr<len1;itr++){
    if(first[itr]==second[itr2]){
        check(first,second,itr,itr2);
    }
}
if(flag==0){
    printf("\nno");
}

}
