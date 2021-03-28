#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];

    printf("Enter a string : ");
    scanf("%s",str);
    printf("%s",str);
    strrev(str);
    printf("\n%s\n",str);
    return 0;
}
