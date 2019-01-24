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
    int n,temp,choice,position;
    
    while(1){
        printf("\n 1. Enter n values\n 2. Insert in between\n 3. Traverse through list \n Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1 : printf("\n Enter the number of values to be inserted : ");
                 scanf("%d",&n);
    
                 while(n--){
                            printf("\n Enter value : ");
                            scanf("%d",&temp);
                             add(temp);
                             printf("added");
                    }
                    printf("%d",start->data);
                    break;
        case 2 : printf("\n Enter the data and position to be inserted (eg: 12 3)");
                 scanf("%d%d",&temp,&position);
                 addInBetween(temp,position);
                 break;
        case 3 : traverse(start);break;

        default : return 0;

    }
    }
    
 
}