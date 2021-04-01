#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50];
    printf("\n\nEnter a string : ");
    scanf("%[^\n]%*c",str);

printf("Resultant String... ");
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
        {
            if(str[i-1] != 'a' && str[i-1] != 'e' && str[i-1] != 'o' && str[i-1] != 'i' && str[i-1] != 'u')
            {
                printf("%c",str[i]);
            }
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n\n");
    return 0;
}