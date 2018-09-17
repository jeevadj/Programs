#include<stdio.h>
#include<stdlib.h>
char Stack[100],top=-1;

void push(char s){
    Stack[++top]=s;
    //printf("\nADDED : %c",Stack[top]);
}
void pop(){
    //printf("\nREMOVED : %c",Stack[top]);
    --top;
}


int main(){
char s[100];
scanf("%s",&s);
int len=strlen(s);
int i=0;
while(i<len){
      //  printf("\n %c %c",s[i],Stack[top]);
    if(s[i]=='{'|| s[i] == '(' ||s[i]=='['){
        push(s[i]);
       }
    else if(s[i]=='}'){
        if(Stack[top]=='{'){
            pop();
        }else{
           printf("FALSE");
           break;
        }
    }
    else if(s[i]==')'){
        if(Stack[top]=='('){
            pop();
           }else{
            printf("FALSE");
            break;
            }
       }
       else if(s[i]==']'){

           if(Stack[top]=='['){
             pop();
           }
           else{
            printf("FALSE");
            break;
           }
       }
       i++;
}
if(top==-1){
    printf("TRUE");
}

}
