#include<stdio.h>
int prime_number(int n)
{
    int i,res=0;
    for(i=n-1;i>=2;i++)
    {
        if(n%i != 0)
        {
            return i;
        }
    }
    return (-1);
}
int main()
{
    int i,t,n,res;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n",&n);
        res=prime_number(n);
        if(res != -1)
        {
            printf("%d\n",res);
        }
        else{
            printf("Invalid Input");
        }
    }
    return 0;
}
