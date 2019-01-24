#include <stdio.h>
#include <stdlib.h>

struct Record
{
    char name[50];
    int id;
    struct Record *next;
} *start;

int insert(int id, char s[])
{
    struct Record *temp, *temp1;
    temp = malloc(sizeof(struct Record));
    temp->id = id;
    strcpy(temp->name, s);
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    
    {
        temp1 = start;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

struct Record *SearchTable(int id)
{
    struct Record *temp;
    temp = start;
    while (temp != NULL)
    {
        if (temp->id == id)
        {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}

void Traverse()
{
    struct Record *temp;
    temp = start;
    int cnt = 1;
    printf("\n\tSL.NO\t\tID\t\tNAME");
    while (temp != NULL)
    {
        printf("\n\t%d\t\t%d\t\t%s", cnt++, temp->id, temp->name);
        temp = temp->next;
    }
}

int main()
{
    int choice, id, n;
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
                printf("\n %d %s", id, s);
                insert(id, s);
            }
            break;

        case 2:
            Traverse();
            break;

        case 3:
            printf("\n Enter the id : ");
            scanf("%d", &n);
            temp = SearchTable(n);
            if (temp == NULL)
            {
                printf("Record Not Found ");
            }
            else
            {
                printf("\n\tSL.NO\t\tID\t\tNAME");
                printf("\n\t%d\t\t%d\t\t%s", 1, temp->id, temp->name);
            }
            break;
        case 4:
            return 0;
        }
    }
}
