#include<stdio.h>
int main()
{
    int i,num,count=0;
    scanf("%d\n",&num);
    int a[10];
    while(num != 0)
    {
        a[count++]=num%10;
        num/=10;
    }

    for(i=count-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}

//find the number of digits but
//multiply  2 num without using * operator
