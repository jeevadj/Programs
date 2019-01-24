#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
}*start;

void add(int d){
    struct node *temp, *temp1;
    if(start == NULL){
        start =  malloc(sizeof(struct node));
        start->data = d;
        start->link = NULL;
    }
    else{
        temp1 = malloc(sizeof(struct node));
        temp = start;
        while(temp->link!=NULL){
            temp = temp->link;
        }

        temp1->data = d;
        temp1->link = NULL;

        temp->link = temp1;
        
    }
}
void addInBetween(int d,int pos){
    struct node *temp,*temp1;
    temp = start;
    int cnt = 1;
    while(temp->link != NULL){
        if(pos-1 == cnt){
            break;
        }
        temp= temp->link;
    }
    temp1 = malloc(sizeof(struct node));
      temp1->data = d;
        temp1->link = temp->link;

        temp->link = temp1;
}
void traverse(struct node* temp){
   while(temp!= NULL){printf("\n data %d",temp->data); temp = temp->link;}
}
int main(){
    printf("\n Linked List Example");
    int n,temp;
    printf("\n Enter the number of values to be inserted : ");
    scanf("%d",&n);
    
    while(n--){
        printf("\n Enter value : ");
        scanf("%d",&temp);
        add(temp);
        printf("added");
    }
    printf("%d",start->data);
    traverse(start);
}