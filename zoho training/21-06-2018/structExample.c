#include<stdio.h>
#include<stdlib.h>
struct information
{
    char name[100];
    int age;
    char city[100];char emailid[100];char contact[10];
    float sslc;float hsc;float college;
}s[2];
int main()
{

    for(int i=0; i<2; i++)
    {
        printf("\nEnter the name : ");
        scanf("%s",&s[i].name);
        printf("\nEnter the age : ");
        scanf("%d",&s[i].age);
        printf("\nEnter the city : ");
        scanf("%s",&s[i].city);
        printf("\nEnter the email id : ");
        scanf("%s",&s[i].emailid);
        printf("\nEnter the contact number : ");
        scanf("%s",&s[i].contact);
        printf("\nEnter the SSLC percentage : ");
        scanf("%f",&s[i].sslc);
        printf("\nEnter the HSC percentage : ");
        scanf("%f",&s[i].hsc);
        printf("\nEnter the CGPA in percentage : ");
        scanf("%f",&s[i].college);
    }

    for(int i=0;i<2;i++){
        printf("\n %s %d %s %s %s %.2f %.2f %.2f  ",s[i].name,s[i].age,s[i].city,s[i].emailid,s[i].contact,s[i].sslc,s[i].hsc,s[i].college);

    }
}
