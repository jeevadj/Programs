/*
Design a calculator program
Req:  ( i ) obtain the input form user and perform the arithemetic calculation
      (ii ) identify the input
      (iii) perform the increment and decrement operation
      (iv ) casting, provide input and casting datatype.
Source Code Req:
       switch,else..if ladder, iterative, entry and exit check loop
*/
#include<stdio.h>
#include<stdlib.h>
float arithemeticOperation(float a,float b,char op)
{

    int res=0;
    // printf("%f %f %c",a,b,op);
    switch(op)
    {
    case '+' :
        a=a+b;
        break;
    case '-' :
        a=a-b;
        break;
    case '*' :
        a=a*b;
        break;
    case '/' :
        a=a/b;
        break;
    case '%' :
        res = (int)a/(int)b;
        break;
    }
    if(op=='%')
    {
        return res;
    }
    else
    {
        return a;
    }
}
float inCed(float val)
{
    int a;
    printf("\n1.Incrementation\n2. Decrementation\n Enter the choice:");
    scanf("%d",&a);
    if(a==1)
    {
        val= arithemeticOperation(val,1,'+');
    }
    else if(a==2)
    {
        val= arithemeticOperation(val,1,'-');
    }
    return val;
}
char *findType(char str[])
{
    int len=strlen(str)-1;
    int c=0,i=0,f=0;
    for(int index=0; index<=len; index++)
    {
        if(str[index]>='0'&&str[index]<='9')
        {
            ++i;
        }
        else if((str[index]>='a'&&str[index]<='z')||(str[index]>='A'&&str[index]<='Z'))
        {
            ++c;
        }
        else if(str[index]=='.')
        {
            ++f;
        }
    }
    if(c>1)
    {
        return "string";
    }
    else if(i==len+1)
    {
        return "integer";
    }
    else if(i==len&&f==1)
    {
        return "float";
    }
    else if(c==1)
    {
        return "char";
    }
    else
    {
        return "string";
    }
}
void TypeCast(char val[],char type[])
{
    char *p = findType(val);
    int len= strlen(p);
    switch(len)
    {
    case 7:
        p=val;
        int value=atoi(p);
        //printf("%d %d %c",value,len,type[0]);
        if(type[0]=='f')
        {
            printf("%f",(float)value);
        }
        else if(type[0]=='c')
        {
            printf("%c",value);
        }
        else
        {
            printf("Invalid Casting...");
        }
        break;
    case 5:
        p=val;
        float valu=atof(p);
       // printf("%f %d %c",valu,len,type[0]);
        if(type[0]=='i')
        {
            printf("%d",(int)valu);
        }
        else
        {
            printf("Invalid Casting...");
        }
        break;
    case 4:
       // printf("%c %d %c",val[0],len,type[0]);
        if(type[0]=='i')
        {
            printf("%d",val[0]);
        }
        else
        {
            printf("Invalid Casting...");
        }
        break;
    case 6:
        printf("String cannot be typecasted...");
        break;
    }
    return 0;

}
int main()
{
    int option;
    do
    {
        printf("\n\t\t Calculator Program \n");
        printf("\n1. Arithemetic Operations\n2. Identify the Type\n3. Incrementation & Decrementation\n4. Casting\n5. Exit\n Enter Your Option : ");
        scanf("%d",&option);

        switch(option)
        {

        case 1 :
            printf("\n\n %50s","Arithemetic Calculation");
            printf("\nEnter your input(eg:12+34) : ");
            char s[100],*temp,opr;
            float op1,op2;
            scanf("%s",&s);
            int len = strlen(s)-1;
            while(len>=0)
            {
                //printf("%c",s[len]);
                if(s[len]!='.')
                {
                    if(!(s[len]>='0'&&s[len]<='9')&&s[len]!='.')
                    {
                        temp=&s[len+1];
                        printf("%s",temp);
                        op2 = atof(temp);
                        opr = s[len];
                        s[len]='\0';
                        temp=&s[0];
                        op1=atof(temp);
                        break;
                    }
                }
                else if(s[len]=='.')
                {
                    len--;
                    continue;
                }
                len--;
            }
            printf("%.2f",arithemeticOperation(op1,op2,opr));
            break;
        case 2:
            printf("\n\n %50s","Identify the type");
            char str[100];

            printf("\nEnter the data : ");
            scanf("%s",&str);
            printf("%s",findType(str));
            /*switch(findType(str)){
              case 'c' : printf("\t char");break;
              case 'f' : printf("\t float");break;
              case 's' : printf("\t String");break;
              case 'i' : printf("\t Integer");break;}*/
            break;

        case 3:
            printf("\n\n %50s","Incrementation or Decrementation");
            float a;
            printf("\n Enter the value to be incremented :");
            scanf("%f",&a);
            printf("\t %f",inCed(a));
            break;
        case 4:
            printf("\n\n %50s","TypeCasting");
            char type[10],value[100];
            printf("\n Enter the value and type (eg: 45.33 int) : ");
            scanf("%s %s",value,type);
            TypeCast(value,type);
        case 5 :
            exit(0);

        default :
            exit(0);
        }

    }
    while(1);
}

