

#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[100],gender[7],designation[50],email[50],address[200],contact[10],maritalStatus[7],doj[12];
    int age,yearOfExpierence;
    char leave[9],amt[11],freecab[50];
    struct salary
    {
        long int previousSalary;
        float pay,basic,hra,da,ta;
    } sal;

};

int main()
{

    struct employee emp;
    printf("Enter Your Name: ");
    scanf("%s",&emp.name);
    printf("Enter Your gender: ");
    scanf("%s",&emp.gender);
    printf("Enter Your designation: ");
    scanf("%s",&emp.designation);
    printf("Enter Your email: ");
    scanf("%s",&emp.email);
    printf("Enter Your address: ");
    scanf("%s",&emp.address);
    printf("Enter Your contact: ");
    scanf("%s",&emp.contact);
    printf("Enter Your marital status: ");
    scanf("%s",&emp.maritalStatus);
    printf("Enter Your age: ");
    scanf("%d",&emp.age);
    printf("Enter Your year of expierence: ");
    scanf("%d",&emp.yearOfExpierence);
    printf("Enter Your previous salary per annum: ");
    scanf("%ld",&emp.sal.previousSalary);

    emp.sal.pay= (float)emp.sal.previousSalary/12;
    emp.sal.basic = (float) emp.sal.pay*(30/100.0);
    emp.sal.hra =(float) emp.sal.pay*(15/100.0);
    emp.sal.da =(float) emp.sal.pay*(8/100.0);
    emp.sal.ta =(float) emp.sal.pay*(10/100.0);

    float pf = (float) emp.sal.pay*(12/100.0);
    emp.sal.pay -= pf;
    char filename[50];
    snprintf(filename,sizeof(char)*50,"%s.txt",emp.name);



    FILE *fp;
    fp= fopen(filename,"a+");

    fprintf(fp,"Name : %s\nGender : %s\nDesignation : %s\nEmail : %s\nAddress : %s\nContact : %s\nMarital Status : %s\nAge : %d\nYear Of Expierence : %d",emp.name,emp.gender,emp.designation,emp.email,emp.address,emp.contact,emp.maritalStatus,emp.age,emp.yearOfExpierence);
    if(emp.gender[0]=='m'||emp.gender[0]=='M')
    {
        if(emp.maritalStatus[0]=='m'||emp.maritalStatus[0]=='M')
        {
            strcpy(emp.leave,"6months");
            strcpy(emp.freecab,"free cab facilities");
            fprintf(fp,"\n Benefits :\n 1. %s \n 2. %s",emp.freecab,emp.leave);
        }
    }
    else if(emp.gender[0]=='f'||emp.gender[0]=='F')
    {
        if(emp.maritalStatus[0]=='m'||emp.maritalStatus[0]=='M')
        {
            strcpy(emp.leave,"6months");
            strcpy(emp.amt,"1.5lakhs");
            strcpy(emp.freecab,"free cab facilities");

            fprintf(fp,"\n Benefits :\n 1. %s \n 2. %s\n 3. %s",emp.freecab,emp.leave,emp.amt);
        }
    }
    fprintf(fp,"\n\n Salary Details....");
    fprintf(fp,"\n\nPay : %f\nBasic : %f\nHRA : %f\nDA : %f\nTA : %f\n Pf (per month) : %f",emp.sal.pay,emp.sal.basic,emp.sal.hra,emp.sal.da,emp.sal.ta,pf);


    fclose(fp);


}
