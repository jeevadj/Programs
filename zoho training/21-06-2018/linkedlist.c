#include<stdio.h>
#include<stdlib.h>
struct node{
char name[100];
struct node *next;
}*nod;
void createNode(){
    char a[50];
   struct node* temp=(struct node*) malloc(sizeof(struct node));
   struct node* node1=(struct node*) malloc(sizeof(struct node));

   printf("\n enter the name : ");
    scanf("%[^\n]%*c",&a);
  // printf("%s",a);
// strcpy(a,spaces(a));
   if(nod->name==NULL){
      //  printf("bow2");
        nod=(struct node*) malloc(sizeof(struct node));
        strcpy(nod->name,a);
 //   nod->name=a;
    nod->next=NULL;
   }else{
       temp= nod;
       //printf("%s %s",temp->name,a);
       while(temp->next!=NULL){
            //printf("\t %s",temp->name);
        temp = temp->next;
       }
       strcpy(node1->name,a);
       node1->next=NULL;
       temp->next=node1;
    }
   }
   char *spaces(char a[]){
      int len = strlen(a),i=0,count;

      while(i<len){

      }
      }
   void display(){


       struct node* temp=(struct node*) malloc(sizeof(struct node));
       temp=nod;
       while(temp!=NULL){
        printf("\n %s",temp->name);
        temp=temp->next;
       }

    }
void SortDescending(){
}
void RemoveCharacter(){
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp=nod;
        int len;
       while(temp->next!=NULL){
           printf("\n bow  %s",temp->next->name);
        len=strlen(temp->next->name)-1;
        if(temp->next->name[len]=='y'||temp->next->name[len]=='m'||temp->next->name[len]=='n'){
            temp->next=temp->next->next;
        }else{
        temp=temp->next;}
       }
     }

int main(){
    int i=0;
    printf("Enter 10 names.... : ");
    while(i<10){

    printf("%d",++i);
    createNode();

    }
    display();

    RemoveCharacter();
    display();

}
