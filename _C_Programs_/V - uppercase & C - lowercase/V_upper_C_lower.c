#include<stdio.h>
#include<string.h>
#include<ctype.h>

int upr_lwr_str(char *a)
{
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' ||a[i] == 'I' || a[i] == 'O' ||a[i] == 'U')
        {
            a[i]=toupper(a[i]);
        }
        else if( (a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122) )
        {
            a[i]=tolower(a[i]);
        }
    }
    printf("Resultant string for Testcase : %s\n",a);
}

int main()
{
    int i,t;
    char str[50];
    printf("\n\nEnter Number of testcase : ");
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        printf("\nTestcase '%d'\n",i+1);
        printf("Enter a string : ");
        scanf("%s",str);

        upr_lwr_str(str);

    }
    return 0;
}