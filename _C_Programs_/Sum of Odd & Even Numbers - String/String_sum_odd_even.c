#include<stdio.h>

int main()
{
    int ores,eres,i;
    char str[50];
    printf("\n\nEnter some numbers without spaces : ");
    scanf("%s",str);
    for(i=0;str[i] != '\0';i++)
    {
        if((str[i] -'0')%2 == 0)
        {
            eres+=(str[i] - '0');
        }
        else
        {
            ores+=(str[i] - '0');
        }
     }

     printf("The sum of Odd Digits : %d and Even Digits : %d\n\n",ores,eres);
     return 0;
}