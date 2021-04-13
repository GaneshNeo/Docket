#include<stdio.h>
#include<limits.h>

int min_diff_pair(int a[],int n)
{
    int i,j,dif;
    dif=INT_MAX;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j]) < dif)
            {
                dif=abs(a[i]-a[j]);
            }
        }
    }
    printf("%d\n",dif);
}
int main()
{
    int i,j,t,n;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d\n",&a[i]);
        }
        min_diff_pair(a,n);
    }
    return 0;
}
