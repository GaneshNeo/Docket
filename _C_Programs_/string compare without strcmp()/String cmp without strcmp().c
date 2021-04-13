#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a[10],b[10];
    int i,flag=1;

    printf("\nEnter 2 strings to compare : ");
    scanf("%s %s",a,b);

    if(strlen(a) == strlen(b))
    {
        for(i=0;i<strlen(a);i++)
        {
            if(tolower(a[i]) != tolower(b[i]))
            {
                flag=0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%s and %s are equal\n",a,b);
        }
        else {
            printf("%s and %s are not equal\n",a,b);
        }
    }
    else{
        printf("%s and %s are not equal\n",a,b);
    }
}