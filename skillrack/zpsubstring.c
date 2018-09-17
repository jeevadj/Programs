#include<stdio.h>
int flag=0,len2=0,len1=0;
int check(char first[],char second[],int itr, int itr2){

    printf("\n %d %d %c %c",itr,itr2,first[itr],second[itr2]);
         if(second[itr2]=='\\'&&second[itr2+1]=='*'){
            itr2++;
            printf("bow");
         }
        if(second[itr2]=='*'&&second[itr2-1]!='\\'){
            int len3;
            len3=strlen(&first[itr]);
            for(int in=itr;in<len3;in++){
                if(check(&first[itr],&second[itr2+1],itr,itr2+1)){
                    printf("yes");
                    flag=1;
                    return 1;
                }

            }
        }
        else if(flag==0){
            if(itr2==len2){
            printf("\n yes");
            flag=1;
            return 1;
        } if(flag==0){
        if(first[itr]==second[itr2]&&itr<=len1){
            itr++;
            itr2++;
            //printf("\n bow");
            check(first,second,itr,itr2);
        }
        return 0;
        }}


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
