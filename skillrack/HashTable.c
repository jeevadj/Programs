#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record
{
    int key;
    int count;
    int id[50];
    char name[50][50];
    struct Record *next;
} *start;

int insert(int id, char s[], int key)
{
    struct Record *temp, *temp1, *lastBefore;

    if (start == NULL)
    {
        start = malloc(sizeof(struct Record));
        start->key = key;
        start->count = 0;
        start->id[start->count] = id;
        strcpy(start->name[start->count], s);
        start->count++;
        start->next = NULL;
    }
    else
    {
       // temp = malloc(sizeof(struct Record));
        temp = start;
        while (temp != NULL)
        {
            // printf("%d %d", temp->key, key);
            if (temp->key == key)
            {
                temp->id[temp->count] = id;
                strcpy(temp->name[temp->count], s);
                temp->count++;
                return 0;
            }
            lastBefore = temp;
            temp = temp->next;
        }
        temp1 = malloc(sizeof(struct Record));
        temp1->count = 0;
        temp1->id[temp1->count] = id;
        temp1->key = key;
        temp1->next = NULL;
        strcpy(temp1->name[temp1->count], s);
        temp1->count++;

        lastBefore->next = temp1;
    }
}

void Traverse()
{
    struct Record *temp;
    int itr, cnt = 1;
    temp = start;
    printf("\n\tSL.NO\t\tID\t\tNAME");
    while (temp != NULL)
    {
        //  printf("\n key -- %d ",temp->key);
        for (itr = 0; itr < temp->count; itr++)
        {
            printf("\n\t%d\t\t%d\t\t%s", cnt++, temp->id[itr], temp->name[itr]);
        }
        temp = temp->next;
    }
}

struct Record* SearchTable(int id,int key){
       
       struct Record *temp,*temp1;
       temp1 = malloc(sizeof(struct Record));
       int itr ;
       temp = start;
       while(temp!=NULL){
           if(temp->key==key){
               for(itr = 0; itr < temp->count ; itr++){
                  // printf("\n %d %d",temp->id[itr],id);
                   if(temp->id[itr]== id){
                       temp1->count = 0;
                       temp1->key = key;
                      temp1->id[0] = temp->id[itr];
                      strcpy(temp1->name[0] ,temp->name[itr]);
                      return temp1;
                   }
               }
           }
           temp = temp->next;
       }

       return NULL;

}
int main()
{
    int choice, n, id, key;
    char s[50];
    struct Record *temp;
    start = NULL;
    while (1)
    {
        printf("\n 1.Insert\n 2.Traverse\n 3.Search Table\n 4.Exit\n\n Enter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter n : ");
            scanf("%d", &n);
            while (n--)
            {
                printf("\n Enter the id : ");
                scanf("%d", &id);
                printf("\n Enter the name : ");
                scanf("%s", &s);
                key = id % 10;
                //printf("\n %d %s",id,s);
                insert(id, s, key);
            }
            break;

        case 2:
            Traverse();
            break;

        case 3:
            printf("\n Enter the id : ");
            scanf("%d", &n);
            key = n % 10;
           // printf("\n Main %d %d",n,key);
            temp = SearchTable(n,key);
            if (temp == NULL)
            {
                printf("Record Not Found ");
            }
            else
            { 
                printf("\n\tSL.NO\t\tID\t\tNAME");
                printf("\n\t%d\t\t%d\t\t%s", 1, temp->id[0], temp->name[0]);
            }
            break;

        case 4:
            return 0;
        }
    }
}