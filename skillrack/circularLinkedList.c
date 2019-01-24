#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
}*start,*last;

void add(int d){
    struct node *temp, *temp1;
    if(start == NULL){
        start =  malloc(sizeof(struct node));
        last =  malloc(sizeof(struct node));
        start->data = d;
        start->link = NULL;
        last = start;
        last->link = start;

    }
    else{
        temp1 = malloc(sizeof(struct node));
        temp = start;
        while(temp->link!= start){
            temp = temp->link;
        }

        temp1->data = d;
        temp1->link = start;

        temp->link = temp1 ;
        
    }
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