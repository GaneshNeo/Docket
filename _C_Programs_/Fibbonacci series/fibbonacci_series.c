#include<stdio.h>
int main()
{
    int a=0,b=1,i,temp,n;

    printf("\nEnter the series length : ");
    scanf("%d",&n);

    printf("Fibbonacci Series..... ");
    
    if(n == 1)
    {
        printf("%d",a);
    }
    else if(n == 2)
    {
        printf("%d %d",a,b);
    }
    else if(n>2)
    {
        printf("%d %d ",a,b);
        for(i=2;i<n;i++)
        {
            temp=a+b;
            printf("%d ",temp);
            a=b;
            b=temp;
        }
    }
    printf("\n\n");
    return 0;
}
