#include<stdio.h>

int perfect_num(int n)
{
    int i,res=0;
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            res+=i;
        }
    }
    if(res == n)
    {
        printf("%d\n",n);
    }
}
int main()
{
    int i,a,b;
    scanf("%d %d\n",&a,&b);
    printf("Perfect numbers are: \n");
    for(i=a;i<=b;i++)
    {
        perfect_num(i);
    }
    return 0;
}


//
