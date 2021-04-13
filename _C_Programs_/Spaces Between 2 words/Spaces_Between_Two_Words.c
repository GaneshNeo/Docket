#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0,min=0,max=50;
    char pro[10]="programmer";
    char str[50];

    printf("\n\nEnter a string of length 50 : ");
    scanf("%s",str);
    
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == pro[j])
        {
            j++;
            if(min < i)
            {
                min=i;
            }
        }
    }

    j=0;
    for(i=strlen(str)-1;i>=0;i--)
    {
        if(str[i] == pro[j])
        {
            j++;
            if(max > i)
            {
                max=i;
            }
        }
    }

    printf("sapaces between two words are %d\n\n",max-min);
    return 0;
}