#include<stdio.h>
int no_of_coins(int n)
{
    int res=0;
    while(n > 0)
    {
        if(n >= 25)
        {
            res++;
            n-=25;
        }
        else if(n >= 10)
        {
            res++;
            n-=10;
        }
        else if(n >= 5)
        {
            res++;
            n-=5;
        }
        else if(n >= 1)
        {
            res++;
            n-=1;
        }
    }
    printf("%d\n",res);
}
int main()
{
    int t,i,n;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n",&n);
        no_of_coins(n);
    }
    return 0;
}
