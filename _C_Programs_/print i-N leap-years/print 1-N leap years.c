#include<stdio.h>
int main()
{
    int year,i;
    scanf("%d\n",&year);
    for(i=1;i<=year;i++)
    {
        if(i%4 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
