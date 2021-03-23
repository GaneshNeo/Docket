#include<stdio.h>
#include<math.h>
int main()
{
    int n,itemp;
    float ftemp;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    ftemp=sqrt((float)n);
    itemp=ftemp;
    if(itemp == ftemp)
    {
        printf("%d is a perfect number.\n",n);
    }
    else
    {
        printf("%d is not a perfect number.\n",n);
    }
    return 0;
}