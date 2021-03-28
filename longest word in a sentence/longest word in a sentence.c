#include<stdio.h>
int main()
{
    int i,j,temp=0,word=0;
    char str[100],b[20],res[20];
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] != ' ')
        {
            b[temp++]=str[i];
        }
        else
        {
            temp=0;
        }
        if(temp > word)
        {
            word=temp;
            for(j=0;j<=word;j++)
            {
                res[j]=b[j];
            }
        }
    }
    printf("\nLongest word has %d characters which is %s\n",word,res);
    return 0;
}
