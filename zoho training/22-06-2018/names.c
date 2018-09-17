#include<stdio.h>
#include<stdlib.h>
struct structure{
char name[100]};
char b[100];
char *reverse(char a[]){
int len=strlen(a)-1;
int i=0,j=len;
    while(j>=0){
        b[i]=a[j];
        j--;
        i++;
    }
    a=b;
    return a;
    }
char *camelString(char a[]){
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(i%2==0){
            a[i]=toupper(a[i]);
        }else{
            a[i]=tolower(a[i]);
        }
    }
    return a;
}
int main(){
    int n;
    printf("Enter the number of names : ");
    scanf("%d",&n);
    struct structure obj[n];
    for(int i=0;i<n;i++){
        scanf("%s",&obj[i].name);
    }
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            printf("%s",reverse(obj[i].name));
        }else{
            printf("%s",camelString(obj[i].name));}
    }
}
