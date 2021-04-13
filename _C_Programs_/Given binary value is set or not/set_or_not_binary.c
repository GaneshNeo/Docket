#include<stdio.h>
#include<string.h>

int main()
{
    int i,a[10],n,res;
    char str[10];

    printf("\n\nEnter a Binary value : ");
    scanf("%s",str);
    printf("Enter the bit position to find it is set or not :");
    scanf("%d",&n);

    i=strlen(str);
    
    res = str[i-n] - '0';
    
    if(res == 1)
    {
        printf("%d position Bit is set in the given binary number %s\n\n",n,str);
    }
    else {
        printf("%d Bit is not set in the given binary number %s\n\n",n,str);
    }
    
    return 0;
}