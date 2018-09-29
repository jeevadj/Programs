#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char temp[50];

char *substring(char str[], int start, int end)
{
    int len = (end - start) + 1;
    char temp1[len];

    strcpy(temp1, str);
    temp1[end + 1] = '\0';
    // printf("\n temp1-->%s str-->%s  len-->%d  s[bow]-->%s",temp1,str,len,&temp1[start]);

    snprintf(temp, len + 1, "%s", &temp1[start]);
    // printf("\n temp--> %s",temp);
    return temp;
}

int main()
{
    char str[50];
    int len, itr, rev, cnt = 0;
    scanf("%s%n", &str, &len);
    for (itr = 0; itr < len; itr++)
    {
        for (rev = len - 1; rev >= 0 && itr <= rev; rev--)
        {
            // printf("\n %d %d",itr,rev);
            printf("\n %s", substring(str, itr, rev));
            cnt++;
        }
    }
    printf("\n Count --> %d", cnt);
}