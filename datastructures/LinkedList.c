#include<stdio.h>
#include<stdlib.h>

/* Structure of Node */
struct Node{
	int id;
	struct Node *address;
}*start;

void insertData(){
	system("clear");
	int value;
	printf("\n Enter a value to insert into list : ");
	scanf("%d",&value);
	if(start == NULL){
		start = malloc(sizeof(struct Node*));
		start->id = value;
		start->address = NULL;
	}else{
		struct Node *temp = start;

		while(temp->address != NULL){
			temp = temp->address;
		}

		struct Node *temp1 = malloc(sizeof(struct Node*));
		temp1->id = value;
		temp1->address = NULL;

		temp->address = temp1;
	}
}

void insertInBetween(){
	system("clear");
	int value, position;
	printf("\n Enter a value, position to insert into list (format : val,pos) : ");
	scanf("%d,%d",&value,&position);


	if(start == NULL){
		printf("\n List is empty so inserting in first position. ");
		start = malloc(sizeof(struct Node*));
		start->id = value;
		start->address = NULL;
	}else{
		struct Node *temp = start;
		int cnt = 1;
		while(temp->address != NULL){
			if(cnt == position - 1){
				break;
			}
			cnt++;
			temp = temp->address;
		}

		struct Node *temp1 = malloc(sizeof(struct Node*));
		temp1->id = value;
		temp1->address = temp->address;

		temp->address = temp1;

	}
}

void deleteByValue(){
	system("clear");
	if(start == NULL){
		printf("List is empty....");
		return;
	}
	int value;
	printf("\n Enter a value to delete : ");
	scanf("%d",&value);
	struct Node *temp = start;
	while(temp->address != NULL && temp->address->id != value){
		temp = temp->address;
	}

	temp->address = temp->address->address;
}

void traverse(){
	system("clear");
	if(start == NULL){
		printf("List is empty....");
		return;
	}
	struct Node *temp = start;
	while(temp != NULL){
		printf("%d\n",temp->id);
		temp = temp->address;
	}
}

void size(){
	system("clear");
	int cnt = 0;

	struct Node *temp = start;
	while(temp != NULL){
		cnt++;
		temp = temp->address;
	}
	printf("Size of the list : %d",cnt);
}

int main(){

	int i = 0;

	do{
		printf("\n\nThis is a sample of LinkedList : \n\n");
		printf("1. Insert\n");
		printf("2. Insert In Between\n");
		printf("3. Delete by Value\n");
		printf("4. Delete by Position\n");
		printf("5. Traverse\n");
		printf("6. Size of List\n");
		printf("Enter 0 to exit\n");
		printf("Choose any of the above options : ");
		scanf("%d",&i);
		switch(i){
			case 1 : insertData(); break;
			case 2 : insertInBetween(); break;
			case 3 : deleteByValue(); break;
			case 4 : break;
			case 5 : traverse(); break;
			case 6 : size(); break;
		}
	}while(i != 0);
}

