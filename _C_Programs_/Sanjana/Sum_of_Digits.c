#include <stdio.h>
#include <string.h>

int sum_of_char(char []);
int sum_of_digits(int);

int main()
{
    int n;
    printf("enter the number of test cases : ");
    scanf("%d",&n);
    char cSentance[30];
    for(int j=0;j<n;j++)
    {
        scanf("%[^\n]%*c",cSentance);//%[^\n]%*c => format Specifier
        
        int iSum;
        iSum=sum_of_char(cSentance);
        printf("%d\n",iSum);
        iSum=sum_of_digits(iSum);
        printf("%d\n",iSum);
    }
    return 0;
}

int sum_of_char(char cSentance[])
{
    int iSum;
    for(int i=0;i<strlen(cSentance);i++)//sizeOf(cSentance)=30
    {
        if(i%2 != 0)
        {
             iSum += cSentance[i];
        }
    }
    return (iSum);
}

int sum_of_digits(int iSum)
{
    int i;
     while(iSum!=0)
    {
       i+=(iSum%10);
        iSum/=10;
    }
    return i;
}