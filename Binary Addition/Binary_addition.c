#include <stdio.h>

int main()
{
    long b1,b2;
    int i=0,rem=0,sum[20];

    printf("\n\nBinary Addition....\n");
    printf("Enter First binary Number : ");
    scanf("%ld", &b1);
    printf("Enter Second binary Number : ");
    scanf("%ld", &b2);
    
    while(b1 != 0 || b2 != 0)
    {
        sum[i++] =(b1 % 10 + b2 % 10 + rem) % 2;
        rem =(b1 % 10 + b2 % 10 + rem) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (rem != 0) {
        sum[i++] = rem;
    }
    --i;
    
    printf("Sum of two binary numbers : ");
    
    while (i >= 0)
        printf("%d", sum[i--]);
    printf("\n\n");
    return 0;
}