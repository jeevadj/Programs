#include<stdio.h>
#include<stdlib.h>
struct node{
char name[100];
struct node *next;
};

void createNode(){
    char a[50];
   struct node* temp=(struct node*) calloc(sizeof( node));
   struct node* node1=(struct node*) calloc(sizeof( node));

   printf("\n enter the name : ");
    scanf("%[^\n]%*c",a);
   if(nod.name==null){
        nod=(struct node*) malloc(sizeof(struct node));
        strcpy(nod->name,a);
      nod.next=NULL;
   }else{
       temp= nod;
       while(temp->next!=NULL){
        temp = temp->next;
       }
      node1.name=a;
       node1.next=NULL;
       temp->next=node1;
    }
   }
   void display(){

       struct node* temp=(struct node*) calloc(sizeof(struct node));
       temp=nod:
       while(temp!=NULL){
        printf("\n %s",temp.name);
        temp=temp->next;
       }

    }

int main(){
    int INT=0;
    printf("Enter 10 names.... : ");
    while(INT<10){

    printf("%d",++INT);
    createNode();

    }
    display();
}


