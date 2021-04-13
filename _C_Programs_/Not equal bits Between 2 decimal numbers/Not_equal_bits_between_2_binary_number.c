#include<stdio.h>

int binary(int c)
{
    int res=0,rem[10],i=0;
    while(c != 0)
    {
        rem[i] = c % 2;
        c/=2;
        if(rem[i] == 1)
        {
            res+=1;
        }
        i+=1;
    }
    return res;
}

int main()
{
    int a,b,c;
    printf("\n\nEnter first number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    c=a^b;
    printf("No of Flipped bits are/is %d\n\n",binary(c));
    return 0;
}

