#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i=0,j,c=0;
    char str[50],res[20][20];
    
    printf("\n\nEnter A string : ");
    scanf("%[^\n]%*c",str);

    for(i=0;i<strlen(str) && c<2 ;i++)
    {
        if(str[i] != ' ' && str[i+1] == ' ')
        {
            c++;
        }
    }
    c=i;
    for(i=c+1;i<strlen(str);i++)
    {
        if(str[i] != ' ')
        {
            printf("%c",str[i]);
        }
        else
        {
            printf(" ");
        }
    }
    printf(" ");
    for(i=0;i<c;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}