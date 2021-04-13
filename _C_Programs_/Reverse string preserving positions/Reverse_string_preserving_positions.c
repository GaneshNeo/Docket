#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0;
    char str[50],temp[50];
    
    printf("\nEnter a string : ");
    scanf("%[^\n]%*c",str);

    char res[strlen(str)];

    printf("\n%s\n",str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == ' ')
        {
            res[i]=' ';
        }
    }

    for(i=strlen(str)-1;i>=0;i--)
    {
        if(res[j] != ' ')
        {
            if(str[i] != ' ')
                res[j++]=str[i];
            else
            {
                i-=1;
                res[j++]=str[i];
            }
        }
        else //if(res[j] == ' ') 
        {
            j++;
            res[j++]=str[i];
        }
    }
    //res[j+1]=res[j+2]=res[j+3]='\n';
    for(i=0;i<j;i++)
    {
        printf("%c",res[i]);
    }
    //printf("%d\n%d\n\n%s\n",j,strlen(res),res);

    return 0;
}