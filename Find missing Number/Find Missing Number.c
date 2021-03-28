#include<stdio.h>
int missing_num(int a[],int n)
{
    int i,j,flag;
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i == a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int i,n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    missing_num(a,n);
    return 0;
}
