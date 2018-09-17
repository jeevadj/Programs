#include<stdio.h>
#include<stdlib.h>
int main(){
char p[100],s[10000],filename[104];
FILE *fp=NULL;
printf("Enter emp name : ");
scanf("%s",&p);
//printf("%s",p);
char a[]={"hello"};
char b[]={"world\n"};
char c[100];
snprintf(c,sizeof(char)*100,"%s %s",a,b);
printf("%s",c);


snprintf(filename,sizeof(char)*104,"%s.txt",p);
//printf("%s",filename);
fp = fopen(filename,"r");
if(fp==NULL){
    printf("FILE not FOUND");
}

while(fgets(s,1000,fp)!=NULL){
     printf("%s",s);
     }
}
