#include<stdio.h>
#include<string.h>
int Markindex;
int isPattern(char a[100],char b[100],char c[100]){

       int len=strlen(a);
       int len1=strlen(b);
       int len2=strlen(c);
       int i=0,j=len2-1,index1=999,index2=998;

       while(i<len||j>=0){
           if(a[i]==b[0]){
              index1=i;
           }
           if(c[j]==b[len1-1]){
              index2=j;
           }
           i++;j--;
       }
       if(index1==index2&& len==len2){
            Markindex=index1;
          return 1;
       }
        return 0;
}
void printPattern(char a[100],char b[100],char c[100],int i){
       int len=strlen(a);
       int len1=strlen(b);
       for(int itr=0;itr<len;itr++){
            for(int itr2=0;itr2<len1;itr2++){
                if(itr2==0){
                    printf("%c",a[itr]);
                }else if(itr2== len1-1){
                    printf("%c",c[itr]);
                }else if(itr==i){
                    printf("%c",b[itr2]);

                }else{
                    printf("+");
                }
            }printf("\n");
       }


}
int main(){

char a[3][100];
int leftindeces[]={0,2,0,1,2,1};
int middleindeces[]={1,1,2,2,0,0};
int rightindeces[]={2,0,1,0,1,2};
scanf("%s %s %s",&a[0],&a[1],&a[2]);
for(int itr=0;itr<6;itr++){
    if(isPattern(a[leftindeces[itr]],a[middleindeces[itr]],a[rightindeces[itr]])){
        printPattern(a[leftindeces[itr]],a[middleindeces[itr]],a[rightindeces[itr]],Markindex);
    }
}

}
