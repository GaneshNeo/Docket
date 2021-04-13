#include <stdio.h>
int split(int a,int n)
{
    int b[20],i=0,res=0;
    while(a>0)
    {
        b[i]=a%10;
        a=a/10;
        i++;
    }
    for(i=i-1;n > 0;i--,n--)
    {
        res+=b[i];
    }
    printf("%d\n",res);
}
int main()
{
    int t,n,a,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n%d\n",&n,&a);
        split(a,n);
    }
}
