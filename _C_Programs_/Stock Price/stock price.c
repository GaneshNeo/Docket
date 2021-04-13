#include<stdio.h>
#include<limits.h>
int stock_price(int a[],int n)
{
    int i,buy,sell,res1,fres;
    fres=INT_MAX;
    for(i=0;i<n-1;i++)
    {
        res1=a[i]-a[i+1];
        if(res1 < fres)
        {
            fres=res1;
            buy=i+1;
        }
    }
    printf("%d\n",buy);
}

int main()
{
    int n,i;
    int a[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    stock_price(a,n);
    return 0;
}
