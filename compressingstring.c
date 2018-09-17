#include<stdio.h>
int main(){
char s[100],arr[26],checkvar;
int a[26],i=0,cnt,in=0,len;

scanf("%s",&s);
len=strlen(s);

while(i<len){
    checkvar=s[i];
    if(i!=0){
        arr[in]=s[i-1];
        a[in]=cnt;
        in++;
        printf("%c%d",arr[in-1],a[in-1]);
    }
    cnt=0;

    while(s[i]==checkvar){
        cnt++;
        i++;
    }
}
if(i==len){
    arr[in]=s[i-1];
        a[in]=cnt;
        in++;
        printf("%c%d",arr[in-1],a[in-1]);
}
}
