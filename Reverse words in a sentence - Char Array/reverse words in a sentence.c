#include<stdio.h>
#include<string.h>


int main()
{
    int i,j=0,k=0;
    char str[100],b[20][20];
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c",str);
    printf("\n");
    for(i=0;i<strlen(str);i++)         //reverse words in sentence
    {
        if(str[i] != ' ' || str[i] == '\0')
        {
            b[j][k++]=str[i];
            //printf("%c",str[i]);
        }
        else
        {
            //b[j][k]='\0';
            printf("%s ", strrev(b[j]) );
            j++;
            k=0;
        }
    }
    b[j][k]='\0';
    printf("%s",strrev(b[j]));
    return 0;
}
